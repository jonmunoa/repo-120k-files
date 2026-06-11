<template>
  <section class="panel-11201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11201");
const base = ref(11201);
const total = computed(() => base.value * 2);

function incrementar11201() {
  base.value++;
}
</script>
