<template>
  <section class="panel-34489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34489");
const base = ref(34489);
const total = computed(() => base.value * 2);

function incrementar34489() {
  base.value++;
}
</script>
