// fichero 53646 -- macros y constantes
#define LIMITE_53646 53746
#define FACTOR_53646 2

int aplicar_limite53646(int valor) {
    if (valor > LIMITE_53646) return LIMITE_53646;
    return valor * FACTOR_53646;
}
