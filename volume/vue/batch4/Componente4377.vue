<template>
  <section class="panel-4377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4377");
const base = ref(4377);
const total = computed(() => base.value * 2);

function incrementar4377() {
  base.value++;
}
</script>
