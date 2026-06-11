<template>
  <section class="panel-45009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45009");
const base = ref(45009);
const total = computed(() => base.value * 2);

function incrementar45009() {
  base.value++;
}
</script>
