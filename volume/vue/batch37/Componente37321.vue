<template>
  <section class="panel-37321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37321");
const base = ref(37321);
const total = computed(() => base.value * 2);

function incrementar37321() {
  base.value++;
}
</script>
