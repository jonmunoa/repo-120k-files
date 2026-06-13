// fichero 8466 -- macros y constantes
#define LIMITE_8466 8566
#define FACTOR_8466 2

int aplicar_limite8466(int valor) {
    if (valor > LIMITE_8466) return LIMITE_8466;
    return valor * FACTOR_8466;
}
