<template>
  <section class="panel-20853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20853");
const base = ref(20853);
const total = computed(() => base.value * 2);

function incrementar20853() {
  base.value++;
}
</script>
