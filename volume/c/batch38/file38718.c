// fichero 38718 -- macros y constantes -- MODIFICADO
#define LIMITE_38718 38918
#define FACTOR_38718 5

int aplicar_limite38718(int valor) {
    if (valor > LIMITE_38718) return LIMITE_38718;
    return valor * FACTOR_38718;
}
