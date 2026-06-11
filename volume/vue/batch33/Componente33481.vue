<template>
  <section class="panel-33481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33481");
const base = ref(33481);
const total = computed(() => base.value * 2);

function incrementar33481() {
  base.value++;
}
</script>
