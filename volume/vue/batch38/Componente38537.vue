<template>
  <section class="panel-38537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38537");
const base = ref(38537);
const total = computed(() => base.value * 2);

function incrementar38537() {
  base.value++;
}
</script>
