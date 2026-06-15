// fichero 11706 -- macros y constantes -- MODIFICADO
#define LIMITE_11706 11906
#define FACTOR_11706 3

int aplicar_limite11706(int valor) {
    if (valor > LIMITE_11706) return LIMITE_11706;
    return valor * FACTOR_11706;
}
