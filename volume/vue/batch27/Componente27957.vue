<template>
  <section class="panel-27957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27957");
const base = ref(27957);
const total = computed(() => base.value * 2);

function incrementar27957() {
  base.value++;
}
</script>
