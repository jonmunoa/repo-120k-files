<template>
  <section class="panel-14957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14957");
const base = ref(14957);
const total = computed(() => base.value * 2);

function incrementar14957() {
  base.value++;
}
</script>
