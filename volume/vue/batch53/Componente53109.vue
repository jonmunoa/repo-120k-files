<template>
  <section class="panel-53109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53109");
const base = ref(53109);
const total = computed(() => base.value * 2);

function incrementar53109() {
  base.value++;
}
</script>
