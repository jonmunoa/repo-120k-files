// fichero 37206 -- macros y constantes -- MODIFICADO
#define LIMITE_37206 37406
#define FACTOR_37206 3

int aplicar_limite37206(int valor) {
    if (valor > LIMITE_37206) return LIMITE_37206;
    return valor * FACTOR_37206;
}
