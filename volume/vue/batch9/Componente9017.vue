<template>
  <section class="panel-9017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9017");
const base = ref(9017);
const total = computed(() => base.value * 2);

function incrementar9017() {
  base.value++;
}
</script>
