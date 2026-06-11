<template>
  <section class="panel-42465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42465");
const base = ref(42465);
const total = computed(() => base.value * 2);

function incrementar42465() {
  base.value++;
}
</script>
