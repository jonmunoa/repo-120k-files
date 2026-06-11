<template>
  <section class="panel-23829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23829");
const base = ref(23829);
const total = computed(() => base.value * 2);

function incrementar23829() {
  base.value++;
}
</script>
