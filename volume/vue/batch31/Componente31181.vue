<template>
  <section class="panel-31181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31181");
const base = ref(31181);
const total = computed(() => base.value * 2);

function incrementar31181() {
  base.value++;
}
</script>
