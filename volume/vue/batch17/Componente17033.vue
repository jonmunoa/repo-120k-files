<template>
  <section class="panel-17033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17033");
const base = ref(17033);
const total = computed(() => base.value * 2);

function incrementar17033() {
  base.value++;
}
</script>
