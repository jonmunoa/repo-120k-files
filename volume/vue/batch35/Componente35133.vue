<template>
  <section class="panel-35133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35133");
const base = ref(35133);
const total = computed(() => base.value * 2);

function incrementar35133() {
  base.value++;
}
</script>
