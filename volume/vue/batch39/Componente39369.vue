<template>
  <section class="panel-39369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39369");
const base = ref(39369);
const total = computed(() => base.value * 2);

function incrementar39369() {
  base.value++;
}
</script>
