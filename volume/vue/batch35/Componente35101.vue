<template>
  <section class="panel-35101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35101");
const base = ref(35101);
const total = computed(() => base.value * 2);

function incrementar35101() {
  base.value++;
}
</script>
