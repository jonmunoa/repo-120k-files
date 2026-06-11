<template>
  <section class="panel-11921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11921");
const base = ref(11921);
const total = computed(() => base.value * 2);

function incrementar11921() {
  base.value++;
}
</script>
