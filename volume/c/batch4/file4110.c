// fichero 4110 -- macros y constantes
#define LIMITE_4110 4210
#define FACTOR_4110 1

int aplicar_limite4110(int valor) {
    if (valor > LIMITE_4110) return LIMITE_4110;
    return valor * FACTOR_4110;
}
