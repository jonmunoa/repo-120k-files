<template>
  <section class="panel-23877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23877");
const base = ref(23877);
const total = computed(() => base.value * 2);

function incrementar23877() {
  base.value++;
}
</script>
