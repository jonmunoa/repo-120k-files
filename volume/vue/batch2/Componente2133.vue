<template>
  <section class="panel-2133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2133");
const base = ref(2133);
const total = computed(() => base.value * 2);

function incrementar2133() {
  base.value++;
}
</script>
