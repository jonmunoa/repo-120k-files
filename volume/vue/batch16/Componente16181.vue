<template>
  <section class="panel-16181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16181");
const base = ref(16181);
const total = computed(() => base.value * 2);

function incrementar16181() {
  base.value++;
}
</script>
