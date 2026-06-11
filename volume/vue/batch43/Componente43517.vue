<template>
  <section class="panel-43517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43517");
const base = ref(43517);
const total = computed(() => base.value * 2);

function incrementar43517() {
  base.value++;
}
</script>
