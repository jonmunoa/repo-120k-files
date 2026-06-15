// fichero 1718 -- macros y constantes -- MODIFICADO
#define LIMITE_1718 1918
#define FACTOR_1718 5

int aplicar_limite1718(int valor) {
    if (valor > LIMITE_1718) return LIMITE_1718;
    return valor * FACTOR_1718;
}
