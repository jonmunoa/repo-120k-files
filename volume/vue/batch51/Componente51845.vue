<template>
  <section class="panel-51845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51845");
const base = ref(51845);
const total = computed(() => base.value * 2);

function incrementar51845() {
  base.value++;
}
</script>
