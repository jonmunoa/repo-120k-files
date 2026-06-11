<template>
  <section class="panel-14037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14037");
const base = ref(14037);
const total = computed(() => base.value * 2);

function incrementar14037() {
  base.value++;
}
</script>
