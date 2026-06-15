// fichero 42506 -- macros y constantes -- MODIFICADO
#define LIMITE_42506 42706
#define FACTOR_42506 3

int aplicar_limite42506(int valor) {
    if (valor > LIMITE_42506) return LIMITE_42506;
    return valor * FACTOR_42506;
}
