<template>
  <section class="panel-8673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8673");
const base = ref(8673);
const total = computed(() => base.value * 2);

function incrementar8673() {
  base.value++;
}
</script>
