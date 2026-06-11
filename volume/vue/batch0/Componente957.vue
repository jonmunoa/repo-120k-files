<template>
  <section class="panel-957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 957");
const base = ref(957);
const total = computed(() => base.value * 2);

function incrementar957() {
  base.value++;
}
</script>
