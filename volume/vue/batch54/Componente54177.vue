<template>
  <section class="panel-54177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54177");
const base = ref(54177);
const total = computed(() => base.value * 2);

function incrementar54177() {
  base.value++;
}
</script>
