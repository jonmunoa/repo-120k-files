<template>
  <section class="panel-689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 689");
const base = ref(689);
const total = computed(() => base.value * 2);

function incrementar689() {
  base.value++;
}
</script>
