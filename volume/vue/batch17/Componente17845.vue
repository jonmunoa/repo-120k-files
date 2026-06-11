<template>
  <section class="panel-17845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17845");
const base = ref(17845);
const total = computed(() => base.value * 2);

function incrementar17845() {
  base.value++;
}
</script>
