<template>
  <section class="panel-48133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48133");
const base = ref(48133);
const total = computed(() => base.value * 2);

function incrementar48133() {
  base.value++;
}
</script>
