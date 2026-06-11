<template>
  <section class="panel-27921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27921");
const base = ref(27921);
const total = computed(() => base.value * 2);

function incrementar27921() {
  base.value++;
}
</script>
