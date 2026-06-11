<template>
  <section class="panel-49829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49829");
const base = ref(49829);
const total = computed(() => base.value * 2);

function incrementar49829() {
  base.value++;
}
</script>
