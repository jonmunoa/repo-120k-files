<template>
  <section class="panel-13029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13029");
const base = ref(13029);
const total = computed(() => base.value * 2);

function incrementar13029() {
  base.value++;
}
</script>
