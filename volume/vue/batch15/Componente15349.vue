<template>
  <section class="panel-15349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15349");
const base = ref(15349);
const total = computed(() => base.value * 2);

function incrementar15349() {
  base.value++;
}
</script>
