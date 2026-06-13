// fichero 23294 -- macros y constantes
#define LIMITE_23294 23394
#define FACTOR_23294 5

int aplicar_limite23294(int valor) {
    if (valor > LIMITE_23294) return LIMITE_23294;
    return valor * FACTOR_23294;
}
