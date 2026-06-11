<template>
  <section class="panel-38817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38817");
const base = ref(38817);
const total = computed(() => base.value * 2);

function incrementar38817() {
  base.value++;
}
</script>
