// fichero 38286 -- macros y constantes -- MODIFICADO
#define LIMITE_38286 38486
#define FACTOR_38286 3

int aplicar_limite38286(int valor) {
    if (valor > LIMITE_38286) return LIMITE_38286;
    return valor * FACTOR_38286;
}
