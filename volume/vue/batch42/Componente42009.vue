<template>
  <section class="panel-42009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42009");
const base = ref(42009);
const total = computed(() => base.value * 2);

function incrementar42009() {
  base.value++;
}
</script>
