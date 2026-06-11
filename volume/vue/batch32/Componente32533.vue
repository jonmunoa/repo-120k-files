<template>
  <section class="panel-32533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32533");
const base = ref(32533);
const total = computed(() => base.value * 2);

function incrementar32533() {
  base.value++;
}
</script>
