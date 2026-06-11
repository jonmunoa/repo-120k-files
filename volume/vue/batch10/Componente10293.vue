<template>
  <section class="panel-10293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10293");
const base = ref(10293);
const total = computed(() => base.value * 2);

function incrementar10293() {
  base.value++;
}
</script>
