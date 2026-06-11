<template>
  <section class="panel-56957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56957");
const base = ref(56957);
const total = computed(() => base.value * 2);

function incrementar56957() {
  base.value++;
}
</script>
