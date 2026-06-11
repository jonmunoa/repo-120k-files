<template>
  <section class="panel-42709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42709");
const base = ref(42709);
const total = computed(() => base.value * 2);

function incrementar42709() {
  base.value++;
}
</script>
