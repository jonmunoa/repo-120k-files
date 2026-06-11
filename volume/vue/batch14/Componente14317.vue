<template>
  <section class="panel-14317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14317");
const base = ref(14317);
const total = computed(() => base.value * 2);

function incrementar14317() {
  base.value++;
}
</script>
