<template>
  <section class="panel-5481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5481");
const base = ref(5481);
const total = computed(() => base.value * 2);

function incrementar5481() {
  base.value++;
}
</script>
