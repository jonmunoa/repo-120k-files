<template>
  <section class="panel-41377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41377");
const base = ref(41377);
const total = computed(() => base.value * 2);

function incrementar41377() {
  base.value++;
}
</script>
