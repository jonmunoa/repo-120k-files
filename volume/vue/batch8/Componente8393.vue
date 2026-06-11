<template>
  <section class="panel-8393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8393");
const base = ref(8393);
const total = computed(() => base.value * 2);

function incrementar8393() {
  base.value++;
}
</script>
