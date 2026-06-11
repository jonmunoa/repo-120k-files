<template>
  <section class="panel-47813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47813");
const base = ref(47813);
const total = computed(() => base.value * 2);

function incrementar47813() {
  base.value++;
}
</script>
