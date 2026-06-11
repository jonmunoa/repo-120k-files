<template>
  <section class="panel-43721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43721");
const base = ref(43721);
const total = computed(() => base.value * 2);

function incrementar43721() {
  base.value++;
}
</script>
