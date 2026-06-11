<template>
  <section class="panel-25461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25461");
const base = ref(25461);
const total = computed(() => base.value * 2);

function incrementar25461() {
  base.value++;
}
</script>
