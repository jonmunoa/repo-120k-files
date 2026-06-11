<template>
  <section class="panel-55357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55357");
const base = ref(55357);
const total = computed(() => base.value * 2);

function incrementar55357() {
  base.value++;
}
</script>
