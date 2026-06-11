<template>
  <section class="panel-50821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50821");
const base = ref(50821);
const total = computed(() => base.value * 2);

function incrementar50821() {
  base.value++;
}
</script>
