<template>
  <section class="panel-35565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35565");
const base = ref(35565);
const total = computed(() => base.value * 2);

function incrementar35565() {
  base.value++;
}
</script>
