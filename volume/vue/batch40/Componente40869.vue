<template>
  <section class="panel-40869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40869");
const base = ref(40869);
const total = computed(() => base.value * 2);

function incrementar40869() {
  base.value++;
}
</script>
