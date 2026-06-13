// fichero 52366 -- macros y constantes
#define LIMITE_52366 52466
#define FACTOR_52366 2

int aplicar_limite52366(int valor) {
    if (valor > LIMITE_52366) return LIMITE_52366;
    return valor * FACTOR_52366;
}
