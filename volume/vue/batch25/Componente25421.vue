<template>
  <section class="panel-25421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25421");
const base = ref(25421);
const total = computed(() => base.value * 2);

function incrementar25421() {
  base.value++;
}
</script>
