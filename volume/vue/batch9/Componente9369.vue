<template>
  <section class="panel-9369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9369");
const base = ref(9369);
const total = computed(() => base.value * 2);

function incrementar9369() {
  base.value++;
}
</script>
