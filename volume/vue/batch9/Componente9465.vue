<template>
  <section class="panel-9465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9465");
const base = ref(9465);
const total = computed(() => base.value * 2);

function incrementar9465() {
  base.value++;
}
</script>
