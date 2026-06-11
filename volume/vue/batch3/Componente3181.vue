<template>
  <section class="panel-3181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3181");
const base = ref(3181);
const total = computed(() => base.value * 2);

function incrementar3181() {
  base.value++;
}
</script>
