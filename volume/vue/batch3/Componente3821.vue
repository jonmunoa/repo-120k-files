<template>
  <section class="panel-3821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3821");
const base = ref(3821);
const total = computed(() => base.value * 2);

function incrementar3821() {
  base.value++;
}
</script>
