<template>
  <section class="panel-5465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5465");
const base = ref(5465);
const total = computed(() => base.value * 2);

function incrementar5465() {
  base.value++;
}
</script>
