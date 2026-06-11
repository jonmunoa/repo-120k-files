<template>
  <section class="panel-15481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15481");
const base = ref(15481);
const total = computed(() => base.value * 2);

function incrementar15481() {
  base.value++;
}
</script>
