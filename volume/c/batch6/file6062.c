// fichero 6062 -- macros y constantes -- MODIFICADO
#define LIMITE_6062 6262
#define FACTOR_6062 4

int aplicar_limite6062(int valor) {
    if (valor > LIMITE_6062) return LIMITE_6062;
    return valor * FACTOR_6062;
}
