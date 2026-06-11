<template>
  <section class="panel-31197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31197");
const base = ref(31197);
const total = computed(() => base.value * 2);

function incrementar31197() {
  base.value++;
}
</script>
