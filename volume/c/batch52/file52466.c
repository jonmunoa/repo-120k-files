// fichero 52466 -- macros y constantes
#define LIMITE_52466 52566
#define FACTOR_52466 2

int aplicar_limite52466(int valor) {
    if (valor > LIMITE_52466) return LIMITE_52466;
    return valor * FACTOR_52466;
}
