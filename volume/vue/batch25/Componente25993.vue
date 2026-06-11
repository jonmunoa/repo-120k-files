<template>
  <section class="panel-25993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25993");
const base = ref(25993);
const total = computed(() => base.value * 2);

function incrementar25993() {
  base.value++;
}
</script>
