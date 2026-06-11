<template>
  <section class="panel-45369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45369");
const base = ref(45369);
const total = computed(() => base.value * 2);

function incrementar45369() {
  base.value++;
}
</script>
