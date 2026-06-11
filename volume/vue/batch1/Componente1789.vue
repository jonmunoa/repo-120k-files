<template>
  <section class="panel-1789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1789");
const base = ref(1789);
const total = computed(() => base.value * 2);

function incrementar1789() {
  base.value++;
}
</script>
