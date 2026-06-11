<template>
  <section class="panel-49177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49177");
const base = ref(49177);
const total = computed(() => base.value * 2);

function incrementar49177() {
  base.value++;
}
</script>
