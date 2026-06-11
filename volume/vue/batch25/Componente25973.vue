<template>
  <section class="panel-25973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25973");
const base = ref(25973);
const total = computed(() => base.value * 2);

function incrementar25973() {
  base.value++;
}
</script>
