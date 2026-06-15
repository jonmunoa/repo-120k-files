// fichero 27082 -- macros y constantes -- MODIFICADO
#define LIMITE_27082 27282
#define FACTOR_27082 4

int aplicar_limite27082(int valor) {
    if (valor > LIMITE_27082) return LIMITE_27082;
    return valor * FACTOR_27082;
}
