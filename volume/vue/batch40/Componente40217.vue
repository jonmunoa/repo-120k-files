<template>
  <section class="panel-40217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40217");
const base = ref(40217);
const total = computed(() => base.value * 2);

function incrementar40217() {
  base.value++;
}
</script>
