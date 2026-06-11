<template>
  <section class="panel-40457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40457");
const base = ref(40457);
const total = computed(() => base.value * 2);

function incrementar40457() {
  base.value++;
}
</script>
