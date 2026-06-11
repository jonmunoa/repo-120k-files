<template>
  <section class="panel-15377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15377");
const base = ref(15377);
const total = computed(() => base.value * 2);

function incrementar15377() {
  base.value++;
}
</script>
