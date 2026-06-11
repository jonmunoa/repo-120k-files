<template>
  <section class="panel-13397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13397");
const base = ref(13397);
const total = computed(() => base.value * 2);

function incrementar13397() {
  base.value++;
}
</script>
