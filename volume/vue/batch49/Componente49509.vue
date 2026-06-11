<template>
  <section class="panel-49509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49509");
const base = ref(49509);
const total = computed(() => base.value * 2);

function incrementar49509() {
  base.value++;
}
</script>
