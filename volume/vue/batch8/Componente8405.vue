<template>
  <section class="panel-8405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8405");
const base = ref(8405);
const total = computed(() => base.value * 2);

function incrementar8405() {
  base.value++;
}
</script>
