// fichero 41758 -- macros y constantes -- MODIFICADO
#define LIMITE_41758 41958
#define FACTOR_41758 5

int aplicar_limite41758(int valor) {
    if (valor > LIMITE_41758) return LIMITE_41758;
    return valor * FACTOR_41758;
}
