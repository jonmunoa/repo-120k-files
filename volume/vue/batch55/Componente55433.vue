<template>
  <section class="panel-55433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55433");
const base = ref(55433);
const total = computed(() => base.value * 2);

function incrementar55433() {
  base.value++;
}
</script>
