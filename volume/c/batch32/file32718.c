// fichero 32718 -- macros y constantes -- MODIFICADO
#define LIMITE_32718 32918
#define FACTOR_32718 5

int aplicar_limite32718(int valor) {
    if (valor > LIMITE_32718) return LIMITE_32718;
    return valor * FACTOR_32718;
}
