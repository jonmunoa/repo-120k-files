<template>
  <section class="panel-40357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40357");
const base = ref(40357);
const total = computed(() => base.value * 2);

function incrementar40357() {
  base.value++;
}
</script>
