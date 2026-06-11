<template>
  <section class="panel-51033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51033");
const base = ref(51033);
const total = computed(() => base.value * 2);

function incrementar51033() {
  base.value++;
}
</script>
