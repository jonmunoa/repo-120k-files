<template>
  <section class="panel-18381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18381");
const base = ref(18381);
const total = computed(() => base.value * 2);

function incrementar18381() {
  base.value++;
}
</script>
