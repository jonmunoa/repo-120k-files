<template>
  <section class="panel-30369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30369");
const base = ref(30369);
const total = computed(() => base.value * 2);

function incrementar30369() {
  base.value++;
}
</script>
