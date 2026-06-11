<template>
  <section class="panel-44289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44289");
const base = ref(44289);
const total = computed(() => base.value * 2);

function incrementar44289() {
  base.value++;
}
</script>
