<template>
  <section class="panel-40993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40993");
const base = ref(40993);
const total = computed(() => base.value * 2);

function incrementar40993() {
  base.value++;
}
</script>
