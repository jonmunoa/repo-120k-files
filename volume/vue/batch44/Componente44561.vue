<template>
  <section class="panel-44561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44561");
const base = ref(44561);
const total = computed(() => base.value * 2);

function incrementar44561() {
  base.value++;
}
</script>
