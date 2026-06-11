<template>
  <section class="panel-2845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2845");
const base = ref(2845);
const total = computed(() => base.value * 2);

function incrementar2845() {
  base.value++;
}
</script>
