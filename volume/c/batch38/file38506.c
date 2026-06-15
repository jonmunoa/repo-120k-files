// fichero 38506 -- macros y constantes -- MODIFICADO
#define LIMITE_38506 38706
#define FACTOR_38506 3

int aplicar_limite38506(int valor) {
    if (valor > LIMITE_38506) return LIMITE_38506;
    return valor * FACTOR_38506;
}
