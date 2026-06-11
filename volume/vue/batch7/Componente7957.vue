<template>
  <section class="panel-7957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7957");
const base = ref(7957);
const total = computed(() => base.value * 2);

function incrementar7957() {
  base.value++;
}
</script>
