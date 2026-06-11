<template>
  <section class="panel-47369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47369");
const base = ref(47369);
const total = computed(() => base.value * 2);

function incrementar47369() {
  base.value++;
}
</script>
