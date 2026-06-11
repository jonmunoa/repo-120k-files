<template>
  <section class="panel-189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 189");
const base = ref(189);
const total = computed(() => base.value * 2);

function incrementar189() {
  base.value++;
}
</script>
