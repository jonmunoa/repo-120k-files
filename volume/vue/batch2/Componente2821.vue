<template>
  <section class="panel-2821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2821");
const base = ref(2821);
const total = computed(() => base.value * 2);

function incrementar2821() {
  base.value++;
}
</script>
