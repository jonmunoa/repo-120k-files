<template>
  <section class="panel-40849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40849");
const base = ref(40849);
const total = computed(() => base.value * 2);

function incrementar40849() {
  base.value++;
}
</script>
