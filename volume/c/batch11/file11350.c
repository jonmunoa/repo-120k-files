// fichero 11350 -- macros y constantes -- MODIFICADO
#define LIMITE_11350 11550
#define FACTOR_11350 2

int aplicar_limite11350(int valor) {
    if (valor > LIMITE_11350) return LIMITE_11350;
    return valor * FACTOR_11350;
}
