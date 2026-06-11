<template>
  <section class="panel-22957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22957");
const base = ref(22957);
const total = computed(() => base.value * 2);

function incrementar22957() {
  base.value++;
}
</script>
