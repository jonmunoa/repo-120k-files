<template>
  <section class="panel-11141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11141");
const base = ref(11141);
const total = computed(() => base.value * 2);

function incrementar11141() {
  base.value++;
}
</script>
