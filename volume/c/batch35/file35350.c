// fichero 35350 -- macros y constantes
#define LIMITE_35350 35450
#define FACTOR_35350 1

int aplicar_limite35350(int valor) {
    if (valor > LIMITE_35350) return LIMITE_35350;
    return valor * FACTOR_35350;
}
