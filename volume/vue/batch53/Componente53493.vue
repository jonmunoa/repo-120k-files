<template>
  <section class="panel-53493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53493");
const base = ref(53493);
const total = computed(() => base.value * 2);

function incrementar53493() {
  base.value++;
}
</script>
