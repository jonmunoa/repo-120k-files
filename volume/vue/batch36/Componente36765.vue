<template>
  <section class="panel-36765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36765");
const base = ref(36765);
const total = computed(() => base.value * 2);

function incrementar36765() {
  base.value++;
}
</script>
