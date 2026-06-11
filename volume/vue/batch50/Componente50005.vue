<template>
  <section class="panel-50005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50005");
const base = ref(50005);
const total = computed(() => base.value * 2);

function incrementar50005() {
  base.value++;
}
</script>
