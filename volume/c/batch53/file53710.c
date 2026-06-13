// fichero 53710 -- macros y constantes
#define LIMITE_53710 53810
#define FACTOR_53710 1

int aplicar_limite53710(int valor) {
    if (valor > LIMITE_53710) return LIMITE_53710;
    return valor * FACTOR_53710;
}
