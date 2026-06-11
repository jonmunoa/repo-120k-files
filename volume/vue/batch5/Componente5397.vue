<template>
  <section class="panel-5397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5397");
const base = ref(5397);
const total = computed(() => base.value * 2);

function incrementar5397() {
  base.value++;
}
</script>
