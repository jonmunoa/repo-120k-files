<template>
  <section class="panel-21277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21277");
const base = ref(21277);
const total = computed(() => base.value * 2);

function incrementar21277() {
  base.value++;
}
</script>
