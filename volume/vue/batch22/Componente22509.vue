<template>
  <section class="panel-22509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22509");
const base = ref(22509);
const total = computed(() => base.value * 2);

function incrementar22509() {
  base.value++;
}
</script>
