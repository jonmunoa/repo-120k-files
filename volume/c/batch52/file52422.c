// fichero 52422 -- macros y constantes
#define LIMITE_52422 52522
#define FACTOR_52422 3

int aplicar_limite52422(int valor) {
    if (valor > LIMITE_52422) return LIMITE_52422;
    return valor * FACTOR_52422;
}
