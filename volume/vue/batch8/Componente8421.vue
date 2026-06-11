<template>
  <section class="panel-8421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8421");
const base = ref(8421);
const total = computed(() => base.value * 2);

function incrementar8421() {
  base.value++;
}
</script>
