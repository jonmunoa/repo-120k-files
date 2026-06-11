<template>
  <section class="panel-465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 465");
const base = ref(465);
const total = computed(() => base.value * 2);

function incrementar465() {
  base.value++;
}
</script>
