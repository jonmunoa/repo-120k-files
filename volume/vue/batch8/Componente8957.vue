<template>
  <section class="panel-8957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8957");
const base = ref(8957);
const total = computed(() => base.value * 2);

function incrementar8957() {
  base.value++;
}
</script>
