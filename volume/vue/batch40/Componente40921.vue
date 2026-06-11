<template>
  <section class="panel-40921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40921");
const base = ref(40921);
const total = computed(() => base.value * 2);

function incrementar40921() {
  base.value++;
}
</script>
