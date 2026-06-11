<template>
  <section class="panel-35017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35017");
const base = ref(35017);
const total = computed(() => base.value * 2);

function incrementar35017() {
  base.value++;
}
</script>
