<template>
  <section class="panel-42985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42985");
const base = ref(42985);
const total = computed(() => base.value * 2);

function incrementar42985() {
  base.value++;
}
</script>
