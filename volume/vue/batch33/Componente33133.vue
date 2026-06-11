<template>
  <section class="panel-33133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33133");
const base = ref(33133);
const total = computed(() => base.value * 2);

function incrementar33133() {
  base.value++;
}
</script>
