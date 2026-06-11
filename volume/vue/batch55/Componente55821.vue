<template>
  <section class="panel-55821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55821");
const base = ref(55821);
const total = computed(() => base.value * 2);

function incrementar55821() {
  base.value++;
}
</script>
