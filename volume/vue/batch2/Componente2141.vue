<template>
  <section class="panel-2141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2141");
const base = ref(2141);
const total = computed(() => base.value * 2);

function incrementar2141() {
  base.value++;
}
</script>
