<template>
  <section class="panel-24189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24189");
const base = ref(24189);
const total = computed(() => base.value * 2);

function incrementar24189() {
  base.value++;
}
</script>
