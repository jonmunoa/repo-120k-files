<template>
  <section class="panel-22133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22133");
const base = ref(22133);
const total = computed(() => base.value * 2);

function incrementar22133() {
  base.value++;
}
</script>
