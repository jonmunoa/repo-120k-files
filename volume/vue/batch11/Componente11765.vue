<template>
  <section class="panel-11765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11765");
const base = ref(11765);
const total = computed(() => base.value * 2);

function incrementar11765() {
  base.value++;
}
</script>
