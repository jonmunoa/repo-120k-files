<template>
  <section class="panel-33845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33845");
const base = ref(33845);
const total = computed(() => base.value * 2);

function incrementar33845() {
  base.value++;
}
</script>
