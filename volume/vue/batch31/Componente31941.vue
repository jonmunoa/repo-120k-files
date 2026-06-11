<template>
  <section class="panel-31941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31941");
const base = ref(31941);
const total = computed(() => base.value * 2);

function incrementar31941() {
  base.value++;
}
</script>
