// fichero 38042 -- macros y constantes -- MODIFICADO
#define LIMITE_38042 38242
#define FACTOR_38042 4

int aplicar_limite38042(int valor) {
    if (valor > LIMITE_38042) return LIMITE_38042;
    return valor * FACTOR_38042;
}
