<template>
  <section class="panel-25141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25141");
const base = ref(25141);
const total = computed(() => base.value * 2);

function incrementar25141() {
  base.value++;
}
</script>
