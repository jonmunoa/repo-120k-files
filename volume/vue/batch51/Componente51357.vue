<template>
  <section class="panel-51357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51357");
const base = ref(51357);
const total = computed(() => base.value * 2);

function incrementar51357() {
  base.value++;
}
</script>
