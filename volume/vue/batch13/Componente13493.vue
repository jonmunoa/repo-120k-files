<template>
  <section class="panel-13493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13493");
const base = ref(13493);
const total = computed(() => base.value * 2);

function incrementar13493() {
  base.value++;
}
</script>
