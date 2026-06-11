<template>
  <section class="panel-22141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22141");
const base = ref(22141);
const total = computed(() => base.value * 2);

function incrementar22141() {
  base.value++;
}
</script>
