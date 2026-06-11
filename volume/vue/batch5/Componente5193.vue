<template>
  <section class="panel-5193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5193");
const base = ref(5193);
const total = computed(() => base.value * 2);

function incrementar5193() {
  base.value++;
}
</script>
