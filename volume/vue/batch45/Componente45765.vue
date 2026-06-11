<template>
  <section class="panel-45765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45765");
const base = ref(45765);
const total = computed(() => base.value * 2);

function incrementar45765() {
  base.value++;
}
</script>
