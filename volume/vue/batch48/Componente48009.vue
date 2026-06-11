<template>
  <section class="panel-48009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48009");
const base = ref(48009);
const total = computed(() => base.value * 2);

function incrementar48009() {
  base.value++;
}
</script>
