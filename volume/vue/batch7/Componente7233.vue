<template>
  <section class="panel-7233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7233");
const base = ref(7233);
const total = computed(() => base.value * 2);

function incrementar7233() {
  base.value++;
}
</script>
