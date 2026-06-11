<template>
  <section class="panel-5421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5421");
const base = ref(5421);
const total = computed(() => base.value * 2);

function incrementar5421() {
  base.value++;
}
</script>
