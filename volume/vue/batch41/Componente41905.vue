<template>
  <section class="panel-41905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41905");
const base = ref(41905);
const total = computed(() => base.value * 2);

function incrementar41905() {
  base.value++;
}
</script>
