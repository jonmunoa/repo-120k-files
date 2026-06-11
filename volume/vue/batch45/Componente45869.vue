<template>
  <section class="panel-45869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45869");
const base = ref(45869);
const total = computed(() => base.value * 2);

function incrementar45869() {
  base.value++;
}
</script>
