<template>
  <section class="panel-13709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13709");
const base = ref(13709);
const total = computed(() => base.value * 2);

function incrementar13709() {
  base.value++;
}
</script>
