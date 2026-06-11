<template>
  <section class="panel-9061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9061");
const base = ref(9061);
const total = computed(() => base.value * 2);

function incrementar9061() {
  base.value++;
}
</script>
