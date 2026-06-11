<template>
  <section class="panel-31725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31725");
const base = ref(31725);
const total = computed(() => base.value * 2);

function incrementar31725() {
  base.value++;
}
</script>
