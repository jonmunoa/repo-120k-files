<template>
  <section class="panel-27105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27105");
const base = ref(27105);
const total = computed(() => base.value * 2);

function incrementar27105() {
  base.value++;
}
</script>
