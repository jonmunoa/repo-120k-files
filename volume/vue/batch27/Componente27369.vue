<template>
  <section class="panel-27369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27369");
const base = ref(27369);
const total = computed(() => base.value * 2);

function incrementar27369() {
  base.value++;
}
</script>
