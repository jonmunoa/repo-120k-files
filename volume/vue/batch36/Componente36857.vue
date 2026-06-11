<template>
  <section class="panel-36857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36857");
const base = ref(36857);
const total = computed(() => base.value * 2);

function incrementar36857() {
  base.value++;
}
</script>
