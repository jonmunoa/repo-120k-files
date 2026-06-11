<template>
  <section class="panel-14197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14197");
const base = ref(14197);
const total = computed(() => base.value * 2);

function incrementar14197() {
  base.value++;
}
</script>
