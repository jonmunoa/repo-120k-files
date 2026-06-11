<template>
  <section class="panel-31261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31261");
const base = ref(31261);
const total = computed(() => base.value * 2);

function incrementar31261() {
  base.value++;
}
</script>
