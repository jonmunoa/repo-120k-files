<template>
  <section class="panel-8965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8965");
const base = ref(8965);
const total = computed(() => base.value * 2);

function incrementar8965() {
  base.value++;
}
</script>
