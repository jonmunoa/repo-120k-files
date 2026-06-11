<template>
  <section class="panel-34961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34961");
const base = ref(34961);
const total = computed(() => base.value * 2);

function incrementar34961() {
  base.value++;
}
</script>
