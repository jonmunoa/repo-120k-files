// fichero 16202 -- macros y constantes -- MODIFICADO
#define LIMITE_16202 16402
#define FACTOR_16202 4

int aplicar_limite16202(int valor) {
    if (valor > LIMITE_16202) return LIMITE_16202;
    return valor * FACTOR_16202;
}
