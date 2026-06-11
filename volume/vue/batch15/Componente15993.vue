<template>
  <section class="panel-15993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15993");
const base = ref(15993);
const total = computed(() => base.value * 2);

function incrementar15993() {
  base.value++;
}
</script>
