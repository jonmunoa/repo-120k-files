// fichero 29986 -- macros y constantes
#define LIMITE_29986 30086
#define FACTOR_29986 2

int aplicar_limite29986(int valor) {
    if (valor > LIMITE_29986) return LIMITE_29986;
    return valor * FACTOR_29986;
}
