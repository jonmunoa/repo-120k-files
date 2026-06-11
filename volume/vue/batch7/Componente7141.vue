<template>
  <section class="panel-7141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7141");
const base = ref(7141);
const total = computed(() => base.value * 2);

function incrementar7141() {
  base.value++;
}
</script>
