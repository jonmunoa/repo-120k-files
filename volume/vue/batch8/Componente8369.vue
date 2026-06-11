<template>
  <section class="panel-8369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8369");
const base = ref(8369);
const total = computed(() => base.value * 2);

function incrementar8369() {
  base.value++;
}
</script>
