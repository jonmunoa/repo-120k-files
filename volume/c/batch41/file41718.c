// fichero 41718 -- macros y constantes -- MODIFICADO
#define LIMITE_41718 41918
#define FACTOR_41718 5

int aplicar_limite41718(int valor) {
    if (valor > LIMITE_41718) return LIMITE_41718;
    return valor * FACTOR_41718;
}
