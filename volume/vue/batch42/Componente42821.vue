<template>
  <section class="panel-42821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42821");
const base = ref(42821);
const total = computed(() => base.value * 2);

function incrementar42821() {
  base.value++;
}
</script>
