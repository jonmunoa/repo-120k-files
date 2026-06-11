<template>
  <section class="panel-39949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39949");
const base = ref(39949);
const total = computed(() => base.value * 2);

function incrementar39949() {
  base.value++;
}
</script>
