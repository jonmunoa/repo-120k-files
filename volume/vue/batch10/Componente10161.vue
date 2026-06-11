<template>
  <section class="panel-10161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10161");
const base = ref(10161);
const total = computed(() => base.value * 2);

function incrementar10161() {
  base.value++;
}
</script>
