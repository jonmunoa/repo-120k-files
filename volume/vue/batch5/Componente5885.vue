<template>
  <section class="panel-5885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5885");
const base = ref(5885);
const total = computed(() => base.value * 2);

function incrementar5885() {
  base.value++;
}
</script>
