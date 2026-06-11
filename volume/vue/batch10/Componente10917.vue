<template>
  <section class="panel-10917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10917");
const base = ref(10917);
const total = computed(() => base.value * 2);

function incrementar10917() {
  base.value++;
}
</script>
