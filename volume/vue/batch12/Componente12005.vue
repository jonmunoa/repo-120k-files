<template>
  <section class="panel-12005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12005");
const base = ref(12005);
const total = computed(() => base.value * 2);

function incrementar12005() {
  base.value++;
}
</script>
