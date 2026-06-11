<template>
  <section class="panel-51729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51729");
const base = ref(51729);
const total = computed(() => base.value * 2);

function incrementar51729() {
  base.value++;
}
</script>
