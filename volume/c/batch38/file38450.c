// fichero 38450 -- macros y constantes
#define LIMITE_38450 38550
#define FACTOR_38450 1

int aplicar_limite38450(int valor) {
    if (valor > LIMITE_38450) return LIMITE_38450;
    return valor * FACTOR_38450;
}
