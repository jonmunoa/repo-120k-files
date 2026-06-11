<template>
  <section class="panel-13561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13561");
const base = ref(13561);
const total = computed(() => base.value * 2);

function incrementar13561() {
  base.value++;
}
</script>
