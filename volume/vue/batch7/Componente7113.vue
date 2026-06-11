<template>
  <section class="panel-7113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7113");
const base = ref(7113);
const total = computed(() => base.value * 2);

function incrementar7113() {
  base.value++;
}
</script>
