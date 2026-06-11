<template>
  <section class="panel-32717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32717");
const base = ref(32717);
const total = computed(() => base.value * 2);

function incrementar32717() {
  base.value++;
}
</script>
