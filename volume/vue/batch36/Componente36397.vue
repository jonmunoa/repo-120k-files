<template>
  <section class="panel-36397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36397");
const base = ref(36397);
const total = computed(() => base.value * 2);

function incrementar36397() {
  base.value++;
}
</script>
