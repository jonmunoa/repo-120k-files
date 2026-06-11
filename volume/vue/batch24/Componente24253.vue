<template>
  <section class="panel-24253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24253");
const base = ref(24253);
const total = computed(() => base.value * 2);

function incrementar24253() {
  base.value++;
}
</script>
