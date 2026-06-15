// fichero 44018 -- macros y constantes -- MODIFICADO
#define LIMITE_44018 44218
#define FACTOR_44018 5

int aplicar_limite44018(int valor) {
    if (valor > LIMITE_44018) return LIMITE_44018;
    return valor * FACTOR_44018;
}
