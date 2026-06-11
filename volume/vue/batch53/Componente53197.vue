<template>
  <section class="panel-53197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53197");
const base = ref(53197);
const total = computed(() => base.value * 2);

function incrementar53197() {
  base.value++;
}
</script>
