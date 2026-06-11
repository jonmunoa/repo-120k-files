<template>
  <section class="panel-12717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12717");
const base = ref(12717);
const total = computed(() => base.value * 2);

function incrementar12717() {
  base.value++;
}
</script>
