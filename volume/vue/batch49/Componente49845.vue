<template>
  <section class="panel-49845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49845");
const base = ref(49845);
const total = computed(() => base.value * 2);

function incrementar49845() {
  base.value++;
}
</script>
