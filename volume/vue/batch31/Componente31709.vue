<template>
  <section class="panel-31709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31709");
const base = ref(31709);
const total = computed(() => base.value * 2);

function incrementar31709() {
  base.value++;
}
</script>
