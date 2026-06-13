// fichero 53202 -- macros y constantes
#define LIMITE_53202 53302
#define FACTOR_53202 3

int aplicar_limite53202(int valor) {
    if (valor > LIMITE_53202) return LIMITE_53202;
    return valor * FACTOR_53202;
}
