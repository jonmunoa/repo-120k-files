<template>
  <section class="panel-38609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38609");
const base = ref(38609);
const total = computed(() => base.value * 2);

function incrementar38609() {
  base.value++;
}
</script>
