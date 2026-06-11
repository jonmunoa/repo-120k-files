<template>
  <section class="panel-8465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8465");
const base = ref(8465);
const total = computed(() => base.value * 2);

function incrementar8465() {
  base.value++;
}
</script>
