<template>
  <section class="panel-45509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45509");
const base = ref(45509);
const total = computed(() => base.value * 2);

function incrementar45509() {
  base.value++;
}
</script>
