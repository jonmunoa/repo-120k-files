<template>
  <section class="panel-54709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54709");
const base = ref(54709);
const total = computed(() => base.value * 2);

function incrementar54709() {
  base.value++;
}
</script>
