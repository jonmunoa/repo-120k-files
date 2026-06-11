<template>
  <section class="panel-9609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9609");
const base = ref(9609);
const total = computed(() => base.value * 2);

function incrementar9609() {
  base.value++;
}
</script>
