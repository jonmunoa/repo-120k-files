<template>
  <section class="panel-6709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6709");
const base = ref(6709);
const total = computed(() => base.value * 2);

function incrementar6709() {
  base.value++;
}
</script>
