<template>
  <section class="panel-38125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38125");
const base = ref(38125);
const total = computed(() => base.value * 2);

function incrementar38125() {
  base.value++;
}
</script>
