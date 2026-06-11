<template>
  <section class="panel-11845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11845");
const base = ref(11845);
const total = computed(() => base.value * 2);

function incrementar11845() {
  base.value++;
}
</script>
