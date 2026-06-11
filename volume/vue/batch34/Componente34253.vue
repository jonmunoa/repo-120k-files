<template>
  <section class="panel-34253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34253");
const base = ref(34253);
const total = computed(() => base.value * 2);

function incrementar34253() {
  base.value++;
}
</script>
