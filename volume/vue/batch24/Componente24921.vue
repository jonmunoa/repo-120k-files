<template>
  <section class="panel-24921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24921");
const base = ref(24921);
const total = computed(() => base.value * 2);

function incrementar24921() {
  base.value++;
}
</script>
