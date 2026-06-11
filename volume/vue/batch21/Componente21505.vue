<template>
  <section class="panel-21505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21505");
const base = ref(21505);
const total = computed(() => base.value * 2);

function incrementar21505() {
  base.value++;
}
</script>
