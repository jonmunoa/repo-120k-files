<template>
  <section class="panel-9009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9009");
const base = ref(9009);
const total = computed(() => base.value * 2);

function incrementar9009() {
  base.value++;
}
</script>
