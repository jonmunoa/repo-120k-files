<template>
  <section class="panel-7461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7461");
const base = ref(7461);
const total = computed(() => base.value * 2);

function incrementar7461() {
  base.value++;
}
</script>
