<template>
  <section class="panel-26609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26609");
const base = ref(26609);
const total = computed(() => base.value * 2);

function incrementar26609() {
  base.value++;
}
</script>
