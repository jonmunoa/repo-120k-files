<template>
  <section class="panel-45481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45481");
const base = ref(45481);
const total = computed(() => base.value * 2);

function incrementar45481() {
  base.value++;
}
</script>
