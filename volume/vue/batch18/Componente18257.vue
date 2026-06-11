<template>
  <section class="panel-18257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18257");
const base = ref(18257);
const total = computed(() => base.value * 2);

function incrementar18257() {
  base.value++;
}
</script>
