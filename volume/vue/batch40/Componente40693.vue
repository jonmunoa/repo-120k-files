<template>
  <section class="panel-40693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40693");
const base = ref(40693);
const total = computed(() => base.value * 2);

function incrementar40693() {
  base.value++;
}
</script>
