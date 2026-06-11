<template>
  <section class="panel-5205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5205");
const base = ref(5205);
const total = computed(() => base.value * 2);

function incrementar5205() {
  base.value++;
}
</script>
