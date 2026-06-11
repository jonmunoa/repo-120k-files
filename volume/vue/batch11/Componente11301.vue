<template>
  <section class="panel-11301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11301");
const base = ref(11301);
const total = computed(() => base.value * 2);

function incrementar11301() {
  base.value++;
}
</script>
