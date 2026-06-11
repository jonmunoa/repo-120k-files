<template>
  <section class="panel-29009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29009");
const base = ref(29009);
const total = computed(() => base.value * 2);

function incrementar29009() {
  base.value++;
}
</script>
