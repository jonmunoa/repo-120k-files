<template>
  <section class="panel-57313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57313");
const base = ref(57313);
const total = computed(() => base.value * 2);

function incrementar57313() {
  base.value++;
}
</script>
