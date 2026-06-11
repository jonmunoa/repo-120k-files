<template>
  <section class="panel-14397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14397");
const base = ref(14397);
const total = computed(() => base.value * 2);

function incrementar14397() {
  base.value++;
}
</script>
