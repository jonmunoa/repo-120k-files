// fichero 37150 -- macros y constantes -- MODIFICADO
#define LIMITE_37150 37350
#define FACTOR_37150 2

int aplicar_limite37150(int valor) {
    if (valor > LIMITE_37150) return LIMITE_37150;
    return valor * FACTOR_37150;
}
