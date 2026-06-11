<template>
  <section class="panel-9101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9101");
const base = ref(9101);
const total = computed(() => base.value * 2);

function incrementar9101() {
  base.value++;
}
</script>
