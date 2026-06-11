<template>
  <section class="panel-39829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39829");
const base = ref(39829);
const total = computed(() => base.value * 2);

function incrementar39829() {
  base.value++;
}
</script>
