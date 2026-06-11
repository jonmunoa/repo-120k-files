<template>
  <section class="panel-57581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57581");
const base = ref(57581);
const total = computed(() => base.value * 2);

function incrementar57581() {
  base.value++;
}
</script>
