<template>
  <section class="panel-44229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44229");
const base = ref(44229);
const total = computed(() => base.value * 2);

function incrementar44229() {
  base.value++;
}
</script>
