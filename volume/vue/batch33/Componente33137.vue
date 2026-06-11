<template>
  <section class="panel-33137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33137");
const base = ref(33137);
const total = computed(() => base.value * 2);

function incrementar33137() {
  base.value++;
}
</script>
