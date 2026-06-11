<template>
  <section class="panel-3645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3645");
const base = ref(3645);
const total = computed(() => base.value * 2);

function incrementar3645() {
  base.value++;
}
</script>
