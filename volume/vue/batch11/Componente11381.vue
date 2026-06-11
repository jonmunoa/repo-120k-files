<template>
  <section class="panel-11381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11381");
const base = ref(11381);
const total = computed(() => base.value * 2);

function incrementar11381() {
  base.value++;
}
</script>
