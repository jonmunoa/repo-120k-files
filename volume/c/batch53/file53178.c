// fichero 53178 -- macros y constantes
#define LIMITE_53178 53278
#define FACTOR_53178 4

int aplicar_limite53178(int valor) {
    if (valor > LIMITE_53178) return LIMITE_53178;
    return valor * FACTOR_53178;
}
