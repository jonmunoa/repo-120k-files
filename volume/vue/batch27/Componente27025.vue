<template>
  <section class="panel-27025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27025");
const base = ref(27025);
const total = computed(() => base.value * 2);

function incrementar27025() {
  base.value++;
}
</script>
