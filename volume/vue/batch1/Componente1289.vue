<template>
  <section class="panel-1289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1289");
const base = ref(1289);
const total = computed(() => base.value * 2);

function incrementar1289() {
  base.value++;
}
</script>
