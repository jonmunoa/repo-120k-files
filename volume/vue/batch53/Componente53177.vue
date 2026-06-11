<template>
  <section class="panel-53177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53177");
const base = ref(53177);
const total = computed(() => base.value * 2);

function incrementar53177() {
  base.value++;
}
</script>
