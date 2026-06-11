<template>
  <section class="panel-6761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6761");
const base = ref(6761);
const total = computed(() => base.value * 2);

function incrementar6761() {
  base.value++;
}
</script>
