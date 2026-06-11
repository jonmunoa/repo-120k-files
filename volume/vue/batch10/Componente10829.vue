<template>
  <section class="panel-10829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10829");
const base = ref(10829);
const total = computed(() => base.value * 2);

function incrementar10829() {
  base.value++;
}
</script>
