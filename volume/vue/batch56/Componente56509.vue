<template>
  <section class="panel-56509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56509");
const base = ref(56509);
const total = computed(() => base.value * 2);

function incrementar56509() {
  base.value++;
}
</script>
