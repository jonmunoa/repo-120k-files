<template>
  <section class="panel-55977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55977");
const base = ref(55977);
const total = computed(() => base.value * 2);

function incrementar55977() {
  base.value++;
}
</script>
