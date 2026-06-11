<template>
  <section class="panel-50921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50921");
const base = ref(50921);
const total = computed(() => base.value * 2);

function incrementar50921() {
  base.value++;
}
</script>
