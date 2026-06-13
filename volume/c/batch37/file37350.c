// fichero 37350 -- macros y constantes
#define LIMITE_37350 37450
#define FACTOR_37350 1

int aplicar_limite37350(int valor) {
    if (valor > LIMITE_37350) return LIMITE_37350;
    return valor * FACTOR_37350;
}
