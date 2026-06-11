<template>
  <section class="panel-2741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2741");
const base = ref(2741);
const total = computed(() => base.value * 2);

function incrementar2741() {
  base.value++;
}
</script>
