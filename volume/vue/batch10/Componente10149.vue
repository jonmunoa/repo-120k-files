<template>
  <section class="panel-10149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10149");
const base = ref(10149);
const total = computed(() => base.value * 2);

function incrementar10149() {
  base.value++;
}
</script>
