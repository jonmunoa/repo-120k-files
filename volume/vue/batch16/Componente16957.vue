<template>
  <section class="panel-16957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16957");
const base = ref(16957);
const total = computed(() => base.value * 2);

function incrementar16957() {
  base.value++;
}
</script>
