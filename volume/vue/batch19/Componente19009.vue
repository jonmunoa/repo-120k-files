<template>
  <section class="panel-19009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19009");
const base = ref(19009);
const total = computed(() => base.value * 2);

function incrementar19009() {
  base.value++;
}
</script>
