<template>
  <section class="panel-23369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23369");
const base = ref(23369);
const total = computed(() => base.value * 2);

function incrementar23369() {
  base.value++;
}
</script>
