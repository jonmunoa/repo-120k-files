<template>
  <section class="panel-39637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39637");
const base = ref(39637);
const total = computed(() => base.value * 2);

function incrementar39637() {
  base.value++;
}
</script>
