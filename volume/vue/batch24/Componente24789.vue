<template>
  <section class="panel-24789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24789");
const base = ref(24789);
const total = computed(() => base.value * 2);

function incrementar24789() {
  base.value++;
}
</script>
