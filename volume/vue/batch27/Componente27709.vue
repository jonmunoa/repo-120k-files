<template>
  <section class="panel-27709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27709");
const base = ref(27709);
const total = computed(() => base.value * 2);

function incrementar27709() {
  base.value++;
}
</script>
