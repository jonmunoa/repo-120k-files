<template>
  <section class="panel-39177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39177");
const base = ref(39177);
const total = computed(() => base.value * 2);

function incrementar39177() {
  base.value++;
}
</script>
