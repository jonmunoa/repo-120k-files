<template>
  <section class="panel-38637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38637");
const base = ref(38637);
const total = computed(() => base.value * 2);

function incrementar38637() {
  base.value++;
}
</script>
