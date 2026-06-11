<template>
  <section class="panel-19813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19813");
const base = ref(19813);
const total = computed(() => base.value * 2);

function incrementar19813() {
  base.value++;
}
</script>
