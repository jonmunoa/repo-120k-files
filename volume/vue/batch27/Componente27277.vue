<template>
  <section class="panel-27277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27277");
const base = ref(27277);
const total = computed(() => base.value * 2);

function incrementar27277() {
  base.value++;
}
</script>
