<template>
  <section class="panel-20301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20301");
const base = ref(20301);
const total = computed(() => base.value * 2);

function incrementar20301() {
  base.value++;
}
</script>
