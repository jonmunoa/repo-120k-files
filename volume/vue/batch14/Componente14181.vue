<template>
  <section class="panel-14181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14181");
const base = ref(14181);
const total = computed(() => base.value * 2);

function incrementar14181() {
  base.value++;
}
</script>
