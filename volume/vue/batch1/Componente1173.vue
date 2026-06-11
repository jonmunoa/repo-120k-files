<template>
  <section class="panel-1173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1173");
const base = ref(1173);
const total = computed(() => base.value * 2);

function incrementar1173() {
  base.value++;
}
</script>
