<template>
  <section class="panel-21905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21905");
const base = ref(21905);
const total = computed(() => base.value * 2);

function incrementar21905() {
  base.value++;
}
</script>
