<template>
  <section class="panel-52145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52145");
const base = ref(52145);
const total = computed(() => base.value * 2);

function incrementar52145() {
  base.value++;
}
</script>
