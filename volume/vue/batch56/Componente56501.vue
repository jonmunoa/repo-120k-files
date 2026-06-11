<template>
  <section class="panel-56501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56501");
const base = ref(56501);
const total = computed(() => base.value * 2);

function incrementar56501() {
  base.value++;
}
</script>
