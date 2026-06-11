<template>
  <section class="panel-23917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23917");
const base = ref(23917);
const total = computed(() => base.value * 2);

function incrementar23917() {
  base.value++;
}
</script>
