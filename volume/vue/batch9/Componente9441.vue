<template>
  <section class="panel-9441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9441");
const base = ref(9441);
const total = computed(() => base.value * 2);

function incrementar9441() {
  base.value++;
}
</script>
