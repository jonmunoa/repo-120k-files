<template>
  <section class="panel-16289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16289");
const base = ref(16289);
const total = computed(() => base.value * 2);

function incrementar16289() {
  base.value++;
}
</script>
