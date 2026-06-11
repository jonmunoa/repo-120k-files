<template>
  <section class="panel-39377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39377");
const base = ref(39377);
const total = computed(() => base.value * 2);

function incrementar39377() {
  base.value++;
}
</script>
