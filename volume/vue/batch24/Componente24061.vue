<template>
  <section class="panel-24061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24061");
const base = ref(24061);
const total = computed(() => base.value * 2);

function incrementar24061() {
  base.value++;
}
</script>
