// fichero 53190 -- macros y constantes
#define LIMITE_53190 53290
#define FACTOR_53190 1

int aplicar_limite53190(int valor) {
    if (valor > LIMITE_53190) return LIMITE_53190;
    return valor * FACTOR_53190;
}
