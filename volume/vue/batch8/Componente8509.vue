<template>
  <section class="panel-8509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8509");
const base = ref(8509);
const total = computed(() => base.value * 2);

function incrementar8509() {
  base.value++;
}
</script>
