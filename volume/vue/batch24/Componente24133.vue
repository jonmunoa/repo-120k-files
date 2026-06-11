<template>
  <section class="panel-24133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24133");
const base = ref(24133);
const total = computed(() => base.value * 2);

function incrementar24133() {
  base.value++;
}
</script>
