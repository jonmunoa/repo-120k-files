<template>
  <section class="panel-30981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30981");
const base = ref(30981);
const total = computed(() => base.value * 2);

function incrementar30981() {
  base.value++;
}
</script>
