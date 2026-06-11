<template>
  <section class="panel-55197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55197");
const base = ref(55197);
const total = computed(() => base.value * 2);

function incrementar55197() {
  base.value++;
}
</script>
