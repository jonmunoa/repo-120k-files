<template>
  <section class="panel-3481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3481");
const base = ref(3481);
const total = computed(() => base.value * 2);

function incrementar3481() {
  base.value++;
}
</script>
