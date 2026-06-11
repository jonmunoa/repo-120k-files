<template>
  <section class="panel-25397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25397");
const base = ref(25397);
const total = computed(() => base.value * 2);

function incrementar25397() {
  base.value++;
}
</script>
