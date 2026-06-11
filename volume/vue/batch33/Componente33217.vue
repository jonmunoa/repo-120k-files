<template>
  <section class="panel-33217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33217");
const base = ref(33217);
const total = computed(() => base.value * 2);

function incrementar33217() {
  base.value++;
}
</script>
