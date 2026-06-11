<template>
  <section class="panel-31845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31845");
const base = ref(31845);
const total = computed(() => base.value * 2);

function incrementar31845() {
  base.value++;
}
</script>
