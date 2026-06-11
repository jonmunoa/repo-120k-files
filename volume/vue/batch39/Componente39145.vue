<template>
  <section class="panel-39145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39145");
const base = ref(39145);
const total = computed(() => base.value * 2);

function incrementar39145() {
  base.value++;
}
</script>
