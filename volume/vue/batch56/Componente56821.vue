<template>
  <section class="panel-56821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56821");
const base = ref(56821);
const total = computed(() => base.value * 2);

function incrementar56821() {
  base.value++;
}
</script>
