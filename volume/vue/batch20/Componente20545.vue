<template>
  <section class="panel-20545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20545");
const base = ref(20545);
const total = computed(() => base.value * 2);

function incrementar20545() {
  base.value++;
}
</script>
