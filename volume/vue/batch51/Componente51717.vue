<template>
  <section class="panel-51717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51717");
const base = ref(51717);
const total = computed(() => base.value * 2);

function incrementar51717() {
  base.value++;
}
</script>
