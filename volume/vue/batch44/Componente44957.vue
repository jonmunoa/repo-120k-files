<template>
  <section class="panel-44957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44957");
const base = ref(44957);
const total = computed(() => base.value * 2);

function incrementar44957() {
  base.value++;
}
</script>
