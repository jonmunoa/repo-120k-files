// fichero 20694 -- macros y constantes -- MODIFICADO
#define LIMITE_20694 20894
#define FACTOR_20694 6

int aplicar_limite20694(int valor) {
    if (valor > LIMITE_20694) return LIMITE_20694;
    return valor * FACTOR_20694;
}
