<template>
  <section class="panel-36509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36509");
const base = ref(36509);
const total = computed(() => base.value * 2);

function incrementar36509() {
  base.value++;
}
</script>
