<template>
  <section class="panel-50709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50709");
const base = ref(50709);
const total = computed(() => base.value * 2);

function incrementar50709() {
  base.value++;
}
</script>
