<template>
  <section class="panel-18293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18293");
const base = ref(18293);
const total = computed(() => base.value * 2);

function incrementar18293() {
  base.value++;
}
</script>
