<template>
  <section class="panel-33965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33965");
const base = ref(33965);
const total = computed(() => base.value * 2);

function incrementar33965() {
  base.value++;
}
</script>
