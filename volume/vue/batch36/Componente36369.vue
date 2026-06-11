<template>
  <section class="panel-36369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36369");
const base = ref(36369);
const total = computed(() => base.value * 2);

function incrementar36369() {
  base.value++;
}
</script>
