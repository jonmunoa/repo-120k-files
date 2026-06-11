<template>
  <section class="panel-27033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27033");
const base = ref(27033);
const total = computed(() => base.value * 2);

function incrementar27033() {
  base.value++;
}
</script>
