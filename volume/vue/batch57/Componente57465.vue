<template>
  <section class="panel-57465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57465");
const base = ref(57465);
const total = computed(() => base.value * 2);

function incrementar57465() {
  base.value++;
}
</script>
