<template>
  <section class="panel-17969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17969");
const base = ref(17969);
const total = computed(() => base.value * 2);

function incrementar17969() {
  base.value++;
}
</script>
