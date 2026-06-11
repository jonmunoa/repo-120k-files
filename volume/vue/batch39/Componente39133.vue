<template>
  <section class="panel-39133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39133");
const base = ref(39133);
const total = computed(() => base.value * 2);

function incrementar39133() {
  base.value++;
}
</script>
