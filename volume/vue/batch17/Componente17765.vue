<template>
  <section class="panel-17765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17765");
const base = ref(17765);
const total = computed(() => base.value * 2);

function incrementar17765() {
  base.value++;
}
</script>
