// fichero 6202 -- macros y constantes -- MODIFICADO
#define LIMITE_6202 6402
#define FACTOR_6202 4

int aplicar_limite6202(int valor) {
    if (valor > LIMITE_6202) return LIMITE_6202;
    return valor * FACTOR_6202;
}
