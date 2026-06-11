<template>
  <section class="panel-56085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56085");
const base = ref(56085);
const total = computed(() => base.value * 2);

function incrementar56085() {
  base.value++;
}
</script>
