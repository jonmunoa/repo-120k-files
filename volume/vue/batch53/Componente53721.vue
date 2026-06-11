<template>
  <section class="panel-53721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53721");
const base = ref(53721);
const total = computed(() => base.value * 2);

function incrementar53721() {
  base.value++;
}
</script>
