<template>
  <section class="panel-20465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20465");
const base = ref(20465);
const total = computed(() => base.value * 2);

function incrementar20465() {
  base.value++;
}
</script>
