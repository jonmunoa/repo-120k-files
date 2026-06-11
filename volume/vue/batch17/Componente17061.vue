<template>
  <section class="panel-17061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17061");
const base = ref(17061);
const total = computed(() => base.value * 2);

function incrementar17061() {
  base.value++;
}
</script>
