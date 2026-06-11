<template>
  <section class="panel-11709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11709");
const base = ref(11709);
const total = computed(() => base.value * 2);

function incrementar11709() {
  base.value++;
}
</script>
