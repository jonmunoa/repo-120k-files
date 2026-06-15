// fichero 38018 -- macros y constantes -- MODIFICADO
#define LIMITE_38018 38218
#define FACTOR_38018 5

int aplicar_limite38018(int valor) {
    if (valor > LIMITE_38018) return LIMITE_38018;
    return valor * FACTOR_38018;
}
