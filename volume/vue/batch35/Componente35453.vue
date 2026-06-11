<template>
  <section class="panel-35453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35453");
const base = ref(35453);
const total = computed(() => base.value * 2);

function incrementar35453() {
  base.value++;
}
</script>
