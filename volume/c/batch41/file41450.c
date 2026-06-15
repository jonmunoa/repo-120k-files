// fichero 41450 -- macros y constantes -- MODIFICADO
#define LIMITE_41450 41650
#define FACTOR_41450 2

int aplicar_limite41450(int valor) {
    if (valor > LIMITE_41450) return LIMITE_41450;
    return valor * FACTOR_41450;
}
