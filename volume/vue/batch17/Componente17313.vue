<template>
  <section class="panel-17313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17313");
const base = ref(17313);
const total = computed(() => base.value * 2);

function incrementar17313() {
  base.value++;
}
</script>
