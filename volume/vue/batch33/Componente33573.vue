<template>
  <section class="panel-33573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33573");
const base = ref(33573);
const total = computed(() => base.value * 2);

function incrementar33573() {
  base.value++;
}
</script>
