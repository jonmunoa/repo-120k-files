<template>
  <section class="panel-7721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7721");
const base = ref(7721);
const total = computed(() => base.value * 2);

function incrementar7721() {
  base.value++;
}
</script>
