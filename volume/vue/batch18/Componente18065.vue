<template>
  <section class="panel-18065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18065");
const base = ref(18065);
const total = computed(() => base.value * 2);

function incrementar18065() {
  base.value++;
}
</script>
