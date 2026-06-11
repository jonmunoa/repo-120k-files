<template>
  <section class="panel-15101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15101");
const base = ref(15101);
const total = computed(() => base.value * 2);

function incrementar15101() {
  base.value++;
}
</script>
