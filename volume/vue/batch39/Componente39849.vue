<template>
  <section class="panel-39849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39849");
const base = ref(39849);
const total = computed(() => base.value * 2);

function incrementar39849() {
  base.value++;
}
</script>
