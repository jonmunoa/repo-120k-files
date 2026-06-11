<template>
  <section class="panel-40421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40421");
const base = ref(40421);
const total = computed(() => base.value * 2);

function incrementar40421() {
  base.value++;
}
</script>
