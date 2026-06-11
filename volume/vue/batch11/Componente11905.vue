<template>
  <section class="panel-11905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11905");
const base = ref(11905);
const total = computed(() => base.value * 2);

function incrementar11905() {
  base.value++;
}
</script>
