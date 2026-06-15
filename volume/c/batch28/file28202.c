// fichero 28202 -- macros y constantes -- MODIFICADO
#define LIMITE_28202 28402
#define FACTOR_28202 4

int aplicar_limite28202(int valor) {
    if (valor > LIMITE_28202) return LIMITE_28202;
    return valor * FACTOR_28202;
}
