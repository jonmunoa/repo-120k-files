// fichero 20738 -- macros y constantes -- MODIFICADO
#define LIMITE_20738 20938
#define FACTOR_20738 5

int aplicar_limite20738(int valor) {
    if (valor > LIMITE_20738) return LIMITE_20738;
    return valor * FACTOR_20738;
}
