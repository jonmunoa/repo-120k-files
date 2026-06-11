<template>
  <section class="panel-17321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17321");
const base = ref(17321);
const total = computed(() => base.value * 2);

function incrementar17321() {
  base.value++;
}
</script>
