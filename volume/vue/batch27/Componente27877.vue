<template>
  <section class="panel-27877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27877");
const base = ref(27877);
const total = computed(() => base.value * 2);

function incrementar27877() {
  base.value++;
}
</script>
