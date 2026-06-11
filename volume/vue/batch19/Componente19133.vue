<template>
  <section class="panel-19133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19133");
const base = ref(19133);
const total = computed(() => base.value * 2);

function incrementar19133() {
  base.value++;
}
</script>
