<template>
  <section class="panel-17977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17977");
const base = ref(17977);
const total = computed(() => base.value * 2);

function incrementar17977() {
  base.value++;
}
</script>
