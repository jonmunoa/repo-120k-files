<template>
  <section class="panel-40089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40089");
const base = ref(40089);
const total = computed(() => base.value * 2);

function incrementar40089() {
  base.value++;
}
</script>
