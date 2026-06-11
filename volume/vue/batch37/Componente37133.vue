<template>
  <section class="panel-37133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37133");
const base = ref(37133);
const total = computed(() => base.value * 2);

function incrementar37133() {
  base.value++;
}
</script>
