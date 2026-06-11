<template>
  <section class="panel-21857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21857");
const base = ref(21857);
const total = computed(() => base.value * 2);

function incrementar21857() {
  base.value++;
}
</script>
