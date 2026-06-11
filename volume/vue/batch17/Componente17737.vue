<template>
  <section class="panel-17737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17737");
const base = ref(17737);
const total = computed(() => base.value * 2);

function incrementar17737() {
  base.value++;
}
</script>
