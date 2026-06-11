<template>
  <section class="panel-10937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10937");
const base = ref(10937);
const total = computed(() => base.value * 2);

function incrementar10937() {
  base.value++;
}
</script>
