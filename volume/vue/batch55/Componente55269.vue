<template>
  <section class="panel-55269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55269");
const base = ref(55269);
const total = computed(() => base.value * 2);

function incrementar55269() {
  base.value++;
}
</script>
