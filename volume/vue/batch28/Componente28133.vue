<template>
  <section class="panel-28133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28133");
const base = ref(28133);
const total = computed(() => base.value * 2);

function incrementar28133() {
  base.value++;
}
</script>
