<template>
  <section class="panel-35765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35765");
const base = ref(35765);
const total = computed(() => base.value * 2);

function incrementar35765() {
  base.value++;
}
</script>
