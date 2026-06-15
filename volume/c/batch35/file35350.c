// fichero 35350 -- macros y constantes -- MODIFICADO
#define LIMITE_35350 35550
#define FACTOR_35350 2

int aplicar_limite35350(int valor) {
    if (valor > LIMITE_35350) return LIMITE_35350;
    return valor * FACTOR_35350;
}
