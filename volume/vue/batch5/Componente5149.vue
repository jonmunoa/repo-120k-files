<template>
  <section class="panel-5149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5149");
const base = ref(5149);
const total = computed(() => base.value * 2);

function incrementar5149() {
  base.value++;
}
</script>
