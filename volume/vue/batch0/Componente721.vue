<template>
  <section class="panel-721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 721");
const base = ref(721);
const total = computed(() => base.value * 2);

function incrementar721() {
  base.value++;
}
</script>
