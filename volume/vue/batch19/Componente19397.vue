<template>
  <section class="panel-19397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19397");
const base = ref(19397);
const total = computed(() => base.value * 2);

function incrementar19397() {
  base.value++;
}
</script>
