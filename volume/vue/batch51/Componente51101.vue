<template>
  <section class="panel-51101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51101");
const base = ref(51101);
const total = computed(() => base.value * 2);

function incrementar51101() {
  base.value++;
}
</script>
