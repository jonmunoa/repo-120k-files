<template>
  <section class="panel-47965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47965");
const base = ref(47965);
const total = computed(() => base.value * 2);

function incrementar47965() {
  base.value++;
}
</script>
