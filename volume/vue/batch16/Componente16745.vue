<template>
  <section class="panel-16745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16745");
const base = ref(16745);
const total = computed(() => base.value * 2);

function incrementar16745() {
  base.value++;
}
</script>
