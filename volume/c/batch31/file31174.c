// fichero 31174 -- macros y constantes -- MODIFICADO
#define LIMITE_31174 31374
#define FACTOR_31174 6

int aplicar_limite31174(int valor) {
    if (valor > LIMITE_31174) return LIMITE_31174;
    return valor * FACTOR_31174;
}
