// fichero 48486 -- macros y constantes -- MODIFICADO
#define LIMITE_48486 48686
#define FACTOR_48486 3

int aplicar_limite48486(int valor) {
    if (valor > LIMITE_48486) return LIMITE_48486;
    return valor * FACTOR_48486;
}
