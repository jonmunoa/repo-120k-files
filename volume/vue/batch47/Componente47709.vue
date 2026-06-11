<template>
  <section class="panel-47709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47709");
const base = ref(47709);
const total = computed(() => base.value * 2);

function incrementar47709() {
  base.value++;
}
</script>
