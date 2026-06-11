<template>
  <section class="panel-4685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4685");
const base = ref(4685);
const total = computed(() => base.value * 2);

function incrementar4685() {
  base.value++;
}
</script>
