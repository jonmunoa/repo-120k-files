<template>
  <section class="panel-50561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50561");
const base = ref(50561);
const total = computed(() => base.value * 2);

function incrementar50561() {
  base.value++;
}
</script>
