<template>
  <section class="panel-54389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54389");
const base = ref(54389);
const total = computed(() => base.value * 2);

function incrementar54389() {
  base.value++;
}
</script>
