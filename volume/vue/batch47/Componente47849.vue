<template>
  <section class="panel-47849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47849");
const base = ref(47849);
const total = computed(() => base.value * 2);

function incrementar47849() {
  base.value++;
}
</script>
