<template>
  <section class="panel-51589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51589");
const base = ref(51589);
const total = computed(() => base.value * 2);

function incrementar51589() {
  base.value++;
}
</script>
