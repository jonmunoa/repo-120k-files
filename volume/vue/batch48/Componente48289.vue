<template>
  <section class="panel-48289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48289");
const base = ref(48289);
const total = computed(() => base.value * 2);

function incrementar48289() {
  base.value++;
}
</script>
