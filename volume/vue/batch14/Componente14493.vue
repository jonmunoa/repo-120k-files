<template>
  <section class="panel-14493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14493");
const base = ref(14493);
const total = computed(() => base.value * 2);

function incrementar14493() {
  base.value++;
}
</script>
