<template>
  <section class="panel-34037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34037");
const base = ref(34037);
const total = computed(() => base.value * 2);

function incrementar34037() {
  base.value++;
}
</script>
