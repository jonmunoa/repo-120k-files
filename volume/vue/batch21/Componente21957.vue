<template>
  <section class="panel-21957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21957");
const base = ref(21957);
const total = computed(() => base.value * 2);

function incrementar21957() {
  base.value++;
}
</script>
