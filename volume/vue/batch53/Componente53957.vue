<template>
  <section class="panel-53957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53957");
const base = ref(53957);
const total = computed(() => base.value * 2);

function incrementar53957() {
  base.value++;
}
</script>
