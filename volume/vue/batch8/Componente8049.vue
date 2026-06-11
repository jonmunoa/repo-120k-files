<template>
  <section class="panel-8049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8049");
const base = ref(8049);
const total = computed(() => base.value * 2);

function incrementar8049() {
  base.value++;
}
</script>
