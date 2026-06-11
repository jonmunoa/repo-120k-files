<template>
  <section class="panel-25169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25169");
const base = ref(25169);
const total = computed(() => base.value * 2);

function incrementar25169() {
  base.value++;
}
</script>
