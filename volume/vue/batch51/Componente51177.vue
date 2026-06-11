<template>
  <section class="panel-51177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51177");
const base = ref(51177);
const total = computed(() => base.value * 2);

function incrementar51177() {
  base.value++;
}
</script>
