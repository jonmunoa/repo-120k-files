<template>
  <section class="panel-10697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10697");
const base = ref(10697);
const total = computed(() => base.value * 2);

function incrementar10697() {
  base.value++;
}
</script>
