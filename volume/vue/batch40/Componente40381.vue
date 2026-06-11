<template>
  <section class="panel-40381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40381");
const base = ref(40381);
const total = computed(() => base.value * 2);

function incrementar40381() {
  base.value++;
}
</script>
