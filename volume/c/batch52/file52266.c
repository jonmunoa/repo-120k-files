// fichero 52266 -- macros y constantes
#define LIMITE_52266 52366
#define FACTOR_52266 2

int aplicar_limite52266(int valor) {
    if (valor > LIMITE_52266) return LIMITE_52266;
    return valor * FACTOR_52266;
}
