<template>
  <section class="panel-10349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10349");
const base = ref(10349);
const total = computed(() => base.value * 2);

function incrementar10349() {
  base.value++;
}
</script>
