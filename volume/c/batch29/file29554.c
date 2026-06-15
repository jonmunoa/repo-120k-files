// fichero 29554 -- macros y constantes -- MODIFICADO
#define LIMITE_29554 29754
#define FACTOR_29554 6

int aplicar_limite29554(int valor) {
    if (valor > LIMITE_29554) return LIMITE_29554;
    return valor * FACTOR_29554;
}
