<template>
  <section class="panel-35709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35709");
const base = ref(35709);
const total = computed(() => base.value * 2);

function incrementar35709() {
  base.value++;
}
</script>
