<template>
  <section class="panel-54789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54789");
const base = ref(54789);
const total = computed(() => base.value * 2);

function incrementar54789() {
  base.value++;
}
</script>
