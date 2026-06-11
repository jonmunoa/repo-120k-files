<template>
  <section class="panel-23289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23289");
const base = ref(23289);
const total = computed(() => base.value * 2);

function incrementar23289() {
  base.value++;
}
</script>
