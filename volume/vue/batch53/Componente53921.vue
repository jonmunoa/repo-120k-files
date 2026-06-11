<template>
  <section class="panel-53921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53921");
const base = ref(53921);
const total = computed(() => base.value * 2);

function incrementar53921() {
  base.value++;
}
</script>
