<template>
  <section class="panel-4877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4877");
const base = ref(4877);
const total = computed(() => base.value * 2);

function incrementar4877() {
  base.value++;
}
</script>
