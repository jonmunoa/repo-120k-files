<template>
  <section class="panel-24205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24205");
const base = ref(24205);
const total = computed(() => base.value * 2);

function incrementar24205() {
  base.value++;
}
</script>
