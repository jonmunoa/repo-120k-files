<template>
  <section class="panel-57197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57197");
const base = ref(57197);
const total = computed(() => base.value * 2);

function incrementar57197() {
  base.value++;
}
</script>
