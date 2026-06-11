<template>
  <section class="panel-35177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35177");
const base = ref(35177);
const total = computed(() => base.value * 2);

function incrementar35177() {
  base.value++;
}
</script>
