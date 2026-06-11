<template>
  <section class="panel-18141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18141");
const base = ref(18141);
const total = computed(() => base.value * 2);

function incrementar18141() {
  base.value++;
}
</script>
