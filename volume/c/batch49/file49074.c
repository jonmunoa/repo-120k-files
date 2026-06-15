// fichero 49074 -- macros y constantes -- MODIFICADO
#define LIMITE_49074 49274
#define FACTOR_49074 6

int aplicar_limite49074(int valor) {
    if (valor > LIMITE_49074) return LIMITE_49074;
    return valor * FACTOR_49074;
}
