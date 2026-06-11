<template>
  <section class="panel-6105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6105");
const base = ref(6105);
const total = computed(() => base.value * 2);

function incrementar6105() {
  base.value++;
}
</script>
