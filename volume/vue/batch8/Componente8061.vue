<template>
  <section class="panel-8061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8061");
const base = ref(8061);
const total = computed(() => base.value * 2);

function incrementar8061() {
  base.value++;
}
</script>
