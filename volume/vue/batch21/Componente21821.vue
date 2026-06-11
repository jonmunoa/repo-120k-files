<template>
  <section class="panel-21821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21821");
const base = ref(21821);
const total = computed(() => base.value * 2);

function incrementar21821() {
  base.value++;
}
</script>
