<template>
  <section class="panel-43229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43229");
const base = ref(43229);
const total = computed(() => base.value * 2);

function incrementar43229() {
  base.value++;
}
</script>
