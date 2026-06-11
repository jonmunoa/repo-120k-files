<template>
  <section class="panel-17293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17293");
const base = ref(17293);
const total = computed(() => base.value * 2);

function incrementar17293() {
  base.value++;
}
</script>
