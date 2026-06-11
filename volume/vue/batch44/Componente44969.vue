<template>
  <section class="panel-44969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44969");
const base = ref(44969);
const total = computed(() => base.value * 2);

function incrementar44969() {
  base.value++;
}
</script>
