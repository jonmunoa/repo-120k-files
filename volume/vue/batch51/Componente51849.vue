<template>
  <section class="panel-51849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51849");
const base = ref(51849);
const total = computed(() => base.value * 2);

function incrementar51849() {
  base.value++;
}
</script>
