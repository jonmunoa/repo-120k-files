<template>
  <section class="panel-25705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25705");
const base = ref(25705);
const total = computed(() => base.value * 2);

function incrementar25705() {
  base.value++;
}
</script>
