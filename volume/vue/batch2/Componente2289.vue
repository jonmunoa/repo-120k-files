<template>
  <section class="panel-2289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2289");
const base = ref(2289);
const total = computed(() => base.value * 2);

function incrementar2289() {
  base.value++;
}
</script>
