<template>
  <section class="panel-61">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 61");
const base = ref(61);
const total = computed(() => base.value * 2);

function incrementar61() {
  base.value++;
}
</script>
