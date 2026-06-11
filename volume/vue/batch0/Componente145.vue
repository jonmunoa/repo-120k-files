<template>
  <section class="panel-145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 145");
const base = ref(145);
const total = computed(() => base.value * 2);

function incrementar145() {
  base.value++;
}
</script>
