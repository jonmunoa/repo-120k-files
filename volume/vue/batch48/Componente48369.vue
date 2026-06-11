<template>
  <section class="panel-48369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48369");
const base = ref(48369);
const total = computed(() => base.value * 2);

function incrementar48369() {
  base.value++;
}
</script>
