// fichero 53286 -- macros y constantes
#define LIMITE_53286 53386
#define FACTOR_53286 2

int aplicar_limite53286(int valor) {
    if (valor > LIMITE_53286) return LIMITE_53286;
    return valor * FACTOR_53286;
}
