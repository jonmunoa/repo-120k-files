<template>
  <section class="panel-16481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16481");
const base = ref(16481);
const total = computed(() => base.value * 2);

function incrementar16481() {
  base.value++;
}
</script>
