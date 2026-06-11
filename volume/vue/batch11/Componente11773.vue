<template>
  <section class="panel-11773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11773");
const base = ref(11773);
const total = computed(() => base.value * 2);

function incrementar11773() {
  base.value++;
}
</script>
