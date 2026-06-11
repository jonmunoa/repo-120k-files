<template>
  <section class="panel-16009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16009");
const base = ref(16009);
const total = computed(() => base.value * 2);

function incrementar16009() {
  base.value++;
}
</script>
