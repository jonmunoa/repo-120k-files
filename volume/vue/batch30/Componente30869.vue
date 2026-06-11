<template>
  <section class="panel-30869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30869");
const base = ref(30869);
const total = computed(() => base.value * 2);

function incrementar30869() {
  base.value++;
}
</script>
