// fichero 41638 -- macros y constantes -- MODIFICADO
#define LIMITE_41638 41838
#define FACTOR_41638 5

int aplicar_limite41638(int valor) {
    if (valor > LIMITE_41638) return LIMITE_41638;
    return valor * FACTOR_41638;
}
