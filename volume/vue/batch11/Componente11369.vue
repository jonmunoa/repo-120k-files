<template>
  <section class="panel-11369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11369");
const base = ref(11369);
const total = computed(() => base.value * 2);

function incrementar11369() {
  base.value++;
}
</script>
