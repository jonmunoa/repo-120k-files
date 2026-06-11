<template>
  <section class="panel-55965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55965");
const base = ref(55965);
const total = computed(() => base.value * 2);

function incrementar55965() {
  base.value++;
}
</script>
