// fichero 41426 -- macros y constantes -- MODIFICADO
#define LIMITE_41426 41626
#define FACTOR_41426 3

int aplicar_limite41426(int valor) {
    if (valor > LIMITE_41426) return LIMITE_41426;
    return valor * FACTOR_41426;
}
