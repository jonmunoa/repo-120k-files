<template>
  <section class="panel-50693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50693");
const base = ref(50693);
const total = computed(() => base.value * 2);

function incrementar50693() {
  base.value++;
}
</script>
