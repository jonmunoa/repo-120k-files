<template>
  <section class="panel-101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 101");
const base = ref(101);
const total = computed(() => base.value * 2);

function incrementar101() {
  base.value++;
}
</script>
