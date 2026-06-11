<template>
  <section class="panel-9141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9141");
const base = ref(9141);
const total = computed(() => base.value * 2);

function incrementar9141() {
  base.value++;
}
</script>
