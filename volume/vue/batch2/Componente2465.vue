<template>
  <section class="panel-2465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2465");
const base = ref(2465);
const total = computed(() => base.value * 2);

function incrementar2465() {
  base.value++;
}
</script>
