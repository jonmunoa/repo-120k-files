// fichero 31174 -- macros y constantes
#define LIMITE_31174 31274
#define FACTOR_31174 5

int aplicar_limite31174(int valor) {
    if (valor > LIMITE_31174) return LIMITE_31174;
    return valor * FACTOR_31174;
}
