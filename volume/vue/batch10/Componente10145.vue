<template>
  <section class="panel-10145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10145");
const base = ref(10145);
const total = computed(() => base.value * 2);

function incrementar10145() {
  base.value++;
}
</script>
