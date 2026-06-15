// fichero 47206 -- macros y constantes -- MODIFICADO
#define LIMITE_47206 47406
#define FACTOR_47206 3

int aplicar_limite47206(int valor) {
    if (valor > LIMITE_47206) return LIMITE_47206;
    return valor * FACTOR_47206;
}
