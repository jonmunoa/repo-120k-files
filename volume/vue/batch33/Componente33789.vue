<template>
  <section class="panel-33789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33789");
const base = ref(33789);
const total = computed(() => base.value * 2);

function incrementar33789() {
  base.value++;
}
</script>
