<template>
  <section class="panel-21289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21289");
const base = ref(21289);
const total = computed(() => base.value * 2);

function incrementar21289() {
  base.value++;
}
</script>
