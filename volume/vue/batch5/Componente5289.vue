<template>
  <section class="panel-5289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5289");
const base = ref(5289);
const total = computed(() => base.value * 2);

function incrementar5289() {
  base.value++;
}
</script>
