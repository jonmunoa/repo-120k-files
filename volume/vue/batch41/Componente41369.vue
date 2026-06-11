<template>
  <section class="panel-41369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41369");
const base = ref(41369);
const total = computed(() => base.value * 2);

function incrementar41369() {
  base.value++;
}
</script>
