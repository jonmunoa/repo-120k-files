<template>
  <section class="panel-11729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11729");
const base = ref(11729);
const total = computed(() => base.value * 2);

function incrementar11729() {
  base.value++;
}
</script>
