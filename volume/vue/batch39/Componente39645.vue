<template>
  <section class="panel-39645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39645");
const base = ref(39645);
const total = computed(() => base.value * 2);

function incrementar39645() {
  base.value++;
}
</script>
