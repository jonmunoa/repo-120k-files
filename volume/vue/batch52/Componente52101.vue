<template>
  <section class="panel-52101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52101");
const base = ref(52101);
const total = computed(() => base.value * 2);

function incrementar52101() {
  base.value++;
}
</script>
