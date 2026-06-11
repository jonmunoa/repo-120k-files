<template>
  <section class="panel-6369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6369");
const base = ref(6369);
const total = computed(() => base.value * 2);

function incrementar6369() {
  base.value++;
}
</script>
