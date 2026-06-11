<template>
  <section class="panel-1941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1941");
const base = ref(1941);
const total = computed(() => base.value * 2);

function incrementar1941() {
  base.value++;
}
</script>
