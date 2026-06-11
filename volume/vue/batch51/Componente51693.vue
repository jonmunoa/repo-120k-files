<template>
  <section class="panel-51693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51693");
const base = ref(51693);
const total = computed(() => base.value * 2);

function incrementar51693() {
  base.value++;
}
</script>
