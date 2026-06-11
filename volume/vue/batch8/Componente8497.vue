<template>
  <section class="panel-8497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8497");
const base = ref(8497);
const total = computed(() => base.value * 2);

function incrementar8497() {
  base.value++;
}
</script>
