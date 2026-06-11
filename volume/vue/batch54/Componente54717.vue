<template>
  <section class="panel-54717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54717");
const base = ref(54717);
const total = computed(() => base.value * 2);

function incrementar54717() {
  base.value++;
}
</script>
