// fichero 41450 -- macros y constantes
#define LIMITE_41450 41550
#define FACTOR_41450 1

int aplicar_limite41450(int valor) {
    if (valor > LIMITE_41450) return LIMITE_41450;
    return valor * FACTOR_41450;
}
