<template>
  <section class="panel-11317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11317");
const base = ref(11317);
const total = computed(() => base.value * 2);

function incrementar11317() {
  base.value++;
}
</script>
