<template>
  <section class="panel-8033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8033");
const base = ref(8033);
const total = computed(() => base.value * 2);

function incrementar8033() {
  base.value++;
}
</script>
