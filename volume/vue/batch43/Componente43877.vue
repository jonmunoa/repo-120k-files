<template>
  <section class="panel-43877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43877");
const base = ref(43877);
const total = computed(() => base.value * 2);

function incrementar43877() {
  base.value++;
}
</script>
