<template>
  <section class="panel-38177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38177");
const base = ref(38177);
const total = computed(() => base.value * 2);

function incrementar38177() {
  base.value++;
}
</script>
