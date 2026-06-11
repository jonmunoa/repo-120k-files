<template>
  <section class="panel-9717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9717");
const base = ref(9717);
const total = computed(() => base.value * 2);

function incrementar9717() {
  base.value++;
}
</script>
