// fichero 7154 -- macros y constantes -- MODIFICADO
#define LIMITE_7154 7354
#define FACTOR_7154 6

int aplicar_limite7154(int valor) {
    if (valor > LIMITE_7154) return LIMITE_7154;
    return valor * FACTOR_7154;
}
