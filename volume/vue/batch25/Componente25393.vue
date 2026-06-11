<template>
  <section class="panel-25393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25393");
const base = ref(25393);
const total = computed(() => base.value * 2);

function incrementar25393() {
  base.value++;
}
</script>
