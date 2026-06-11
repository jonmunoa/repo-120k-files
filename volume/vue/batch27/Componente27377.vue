<template>
  <section class="panel-27377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27377");
const base = ref(27377);
const total = computed(() => base.value * 2);

function incrementar27377() {
  base.value++;
}
</script>
