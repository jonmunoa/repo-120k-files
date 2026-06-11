<template>
  <section class="panel-13357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13357");
const base = ref(13357);
const total = computed(() => base.value * 2);

function incrementar13357() {
  base.value++;
}
</script>
