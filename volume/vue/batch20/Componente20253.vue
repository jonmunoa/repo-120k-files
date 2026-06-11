<template>
  <section class="panel-20253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20253");
const base = ref(20253);
const total = computed(() => base.value * 2);

function incrementar20253() {
  base.value++;
}
</script>
