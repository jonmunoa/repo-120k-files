<template>
  <section class="panel-18177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18177");
const base = ref(18177);
const total = computed(() => base.value * 2);

function incrementar18177() {
  base.value++;
}
</script>
