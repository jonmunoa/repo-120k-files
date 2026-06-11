<template>
  <section class="panel-56109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56109");
const base = ref(56109);
const total = computed(() => base.value * 2);

function incrementar56109() {
  base.value++;
}
</script>
