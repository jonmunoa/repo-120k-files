<template>
  <section class="panel-34189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34189");
const base = ref(34189);
const total = computed(() => base.value * 2);

function incrementar34189() {
  base.value++;
}
</script>
