<template>
  <section class="panel-32349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32349");
const base = ref(32349);
const total = computed(() => base.value * 2);

function incrementar32349() {
  base.value++;
}
</script>
