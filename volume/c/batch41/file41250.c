// fichero 41250 -- macros y constantes -- MODIFICADO
#define LIMITE_41250 41450
#define FACTOR_41250 2

int aplicar_limite41250(int valor) {
    if (valor > LIMITE_41250) return LIMITE_41250;
    return valor * FACTOR_41250;
}
