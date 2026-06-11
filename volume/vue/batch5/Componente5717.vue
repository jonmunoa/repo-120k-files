<template>
  <section class="panel-5717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5717");
const base = ref(5717);
const total = computed(() => base.value * 2);

function incrementar5717() {
  base.value++;
}
</script>
