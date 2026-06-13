// fichero 53074 -- macros y constantes
#define LIMITE_53074 53174
#define FACTOR_53074 5

int aplicar_limite53074(int valor) {
    if (valor > LIMITE_53074) return LIMITE_53074;
    return valor * FACTOR_53074;
}
