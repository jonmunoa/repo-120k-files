// fichero 19678 -- macros y constantes -- MODIFICADO
#define LIMITE_19678 19878
#define FACTOR_19678 5

int aplicar_limite19678(int valor) {
    if (valor > LIMITE_19678) return LIMITE_19678;
    return valor * FACTOR_19678;
}
