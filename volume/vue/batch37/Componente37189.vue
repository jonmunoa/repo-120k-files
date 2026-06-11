<template>
  <section class="panel-37189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37189");
const base = ref(37189);
const total = computed(() => base.value * 2);

function incrementar37189() {
  base.value++;
}
</script>
