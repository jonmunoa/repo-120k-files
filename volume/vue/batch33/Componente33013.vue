<template>
  <section class="panel-33013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33013");
const base = ref(33013);
const total = computed(() => base.value * 2);

function incrementar33013() {
  base.value++;
}
</script>
