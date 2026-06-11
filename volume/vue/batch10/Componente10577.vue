<template>
  <section class="panel-10577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10577");
const base = ref(10577);
const total = computed(() => base.value * 2);

function incrementar10577() {
  base.value++;
}
</script>
