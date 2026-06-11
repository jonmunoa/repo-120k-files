<template>
  <section class="panel-8205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8205");
const base = ref(8205);
const total = computed(() => base.value * 2);

function incrementar8205() {
  base.value++;
}
</script>
