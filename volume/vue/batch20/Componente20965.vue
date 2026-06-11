<template>
  <section class="panel-20965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20965");
const base = ref(20965);
const total = computed(() => base.value * 2);

function incrementar20965() {
  base.value++;
}
</script>
