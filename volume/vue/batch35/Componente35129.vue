<template>
  <section class="panel-35129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35129");
const base = ref(35129);
const total = computed(() => base.value * 2);

function incrementar35129() {
  base.value++;
}
</script>
