<template>
  <section class="panel-9941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9941");
const base = ref(9941);
const total = computed(() => base.value * 2);

function incrementar9941() {
  base.value++;
}
</script>
