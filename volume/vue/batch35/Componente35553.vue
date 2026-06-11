<template>
  <section class="panel-35553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35553");
const base = ref(35553);
const total = computed(() => base.value * 2);

function incrementar35553() {
  base.value++;
}
</script>
