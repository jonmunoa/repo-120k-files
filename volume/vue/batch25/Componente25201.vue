<template>
  <section class="panel-25201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25201");
const base = ref(25201);
const total = computed(() => base.value * 2);

function incrementar25201() {
  base.value++;
}
</script>
