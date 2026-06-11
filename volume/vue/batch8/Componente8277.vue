<template>
  <section class="panel-8277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8277");
const base = ref(8277);
const total = computed(() => base.value * 2);

function incrementar8277() {
  base.value++;
}
</script>
