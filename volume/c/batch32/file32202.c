// fichero 32202 -- macros y constantes -- MODIFICADO
#define LIMITE_32202 32402
#define FACTOR_32202 4

int aplicar_limite32202(int valor) {
    if (valor > LIMITE_32202) return LIMITE_32202;
    return valor * FACTOR_32202;
}
