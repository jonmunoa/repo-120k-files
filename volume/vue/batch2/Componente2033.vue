<template>
  <section class="panel-2033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2033");
const base = ref(2033);
const total = computed(() => base.value * 2);

function incrementar2033() {
  base.value++;
}
</script>
