<template>
  <section class="panel-25773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25773");
const base = ref(25773);
const total = computed(() => base.value * 2);

function incrementar25773() {
  base.value++;
}
</script>
