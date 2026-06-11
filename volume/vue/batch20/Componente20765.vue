<template>
  <section class="panel-20765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20765");
const base = ref(20765);
const total = computed(() => base.value * 2);

function incrementar20765() {
  base.value++;
}
</script>
