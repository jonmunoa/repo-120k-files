<template>
  <section class="panel-43121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43121");
const base = ref(43121);
const total = computed(() => base.value * 2);

function incrementar43121() {
  base.value++;
}
</script>
