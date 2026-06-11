<template>
  <section class="panel-38829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38829");
const base = ref(38829);
const total = computed(() => base.value * 2);

function incrementar38829() {
  base.value++;
}
</script>
