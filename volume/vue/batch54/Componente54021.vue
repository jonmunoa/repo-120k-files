<template>
  <section class="panel-54021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54021");
const base = ref(54021);
const total = computed(() => base.value * 2);

function incrementar54021() {
  base.value++;
}
</script>
