<template>
  <section class="panel-37185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37185");
const base = ref(37185);
const total = computed(() => base.value * 2);

function incrementar37185() {
  base.value++;
}
</script>
