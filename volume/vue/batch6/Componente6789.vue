<template>
  <section class="panel-6789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6789");
const base = ref(6789);
const total = computed(() => base.value * 2);

function incrementar6789() {
  base.value++;
}
</script>
