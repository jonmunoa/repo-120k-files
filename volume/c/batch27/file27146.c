// fichero 27146 -- macros y constantes -- MODIFICADO
#define LIMITE_27146 27346
#define FACTOR_27146 3

int aplicar_limite27146(int valor) {
    if (valor > LIMITE_27146) return LIMITE_27146;
    return valor * FACTOR_27146;
}
