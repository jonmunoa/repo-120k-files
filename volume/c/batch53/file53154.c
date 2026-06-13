// fichero 53154 -- macros y constantes
#define LIMITE_53154 53254
#define FACTOR_53154 5

int aplicar_limite53154(int valor) {
    if (valor > LIMITE_53154) return LIMITE_53154;
    return valor * FACTOR_53154;
}
