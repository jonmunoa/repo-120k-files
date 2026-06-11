<template>
  <section class="panel-12789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12789");
const base = ref(12789);
const total = computed(() => base.value * 2);

function incrementar12789() {
  base.value++;
}
</script>
