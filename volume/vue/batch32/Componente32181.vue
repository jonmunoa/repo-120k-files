<template>
  <section class="panel-32181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32181");
const base = ref(32181);
const total = computed(() => base.value * 2);

function incrementar32181() {
  base.value++;
}
</script>
