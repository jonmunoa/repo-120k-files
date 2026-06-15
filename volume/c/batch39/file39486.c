// fichero 39486 -- macros y constantes -- MODIFICADO
#define LIMITE_39486 39686
#define FACTOR_39486 3

int aplicar_limite39486(int valor) {
    if (valor > LIMITE_39486) return LIMITE_39486;
    return valor * FACTOR_39486;
}
