<template>
  <section class="panel-13925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13925");
const base = ref(13925);
const total = computed(() => base.value * 2);

function incrementar13925() {
  base.value++;
}
</script>
