<template>
  <section class="panel-25737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25737");
const base = ref(25737);
const total = computed(() => base.value * 2);

function incrementar25737() {
  base.value++;
}
</script>
