// fichero 2266 -- macros y constantes
#define LIMITE_2266 2366
#define FACTOR_2266 2

int aplicar_limite2266(int valor) {
    if (valor > LIMITE_2266) return LIMITE_2266;
    return valor * FACTOR_2266;
}
