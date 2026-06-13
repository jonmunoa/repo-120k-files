// fichero 29150 -- macros y constantes
#define LIMITE_29150 29250
#define FACTOR_29150 1

int aplicar_limite29150(int valor) {
    if (valor > LIMITE_29150) return LIMITE_29150;
    return valor * FACTOR_29150;
}
