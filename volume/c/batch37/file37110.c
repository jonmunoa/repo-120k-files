// fichero 37110 -- macros y constantes
#define LIMITE_37110 37210
#define FACTOR_37110 1

int aplicar_limite37110(int valor) {
    if (valor > LIMITE_37110) return LIMITE_37110;
    return valor * FACTOR_37110;
}
