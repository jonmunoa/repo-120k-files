<template>
  <section class="panel-25277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25277");
const base = ref(25277);
const total = computed(() => base.value * 2);

function incrementar25277() {
  base.value++;
}
</script>
