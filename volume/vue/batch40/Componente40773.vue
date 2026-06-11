<template>
  <section class="panel-40773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40773");
const base = ref(40773);
const total = computed(() => base.value * 2);

function incrementar40773() {
  base.value++;
}
</script>
