<template>
  <section class="panel-5845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5845");
const base = ref(5845);
const total = computed(() => base.value * 2);

function incrementar5845() {
  base.value++;
}
</script>
