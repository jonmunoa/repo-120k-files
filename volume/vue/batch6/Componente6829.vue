<template>
  <section class="panel-6829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6829");
const base = ref(6829);
const total = computed(() => base.value * 2);

function incrementar6829() {
  base.value++;
}
</script>
