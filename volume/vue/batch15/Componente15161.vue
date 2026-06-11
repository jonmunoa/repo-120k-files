<template>
  <section class="panel-15161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15161");
const base = ref(15161);
const total = computed(() => base.value * 2);

function incrementar15161() {
  base.value++;
}
</script>
