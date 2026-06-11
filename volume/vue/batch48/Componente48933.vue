<template>
  <section class="panel-48933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48933");
const base = ref(48933);
const total = computed(() => base.value * 2);

function incrementar48933() {
  base.value++;
}
</script>
