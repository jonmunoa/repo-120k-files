<template>
  <section class="panel-10485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10485");
const base = ref(10485);
const total = computed(() => base.value * 2);

function incrementar10485() {
  base.value++;
}
</script>
