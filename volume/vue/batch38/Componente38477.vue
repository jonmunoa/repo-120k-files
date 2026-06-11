<template>
  <section class="panel-38477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38477");
const base = ref(38477);
const total = computed(() => base.value * 2);

function incrementar38477() {
  base.value++;
}
</script>
