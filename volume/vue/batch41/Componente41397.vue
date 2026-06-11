<template>
  <section class="panel-41397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41397");
const base = ref(41397);
const total = computed(() => base.value * 2);

function incrementar41397() {
  base.value++;
}
</script>
