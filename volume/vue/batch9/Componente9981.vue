<template>
  <section class="panel-9981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9981");
const base = ref(9981);
const total = computed(() => base.value * 2);

function incrementar9981() {
  base.value++;
}
</script>
