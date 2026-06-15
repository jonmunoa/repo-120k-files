// fichero 38246 -- macros y constantes -- MODIFICADO
#define LIMITE_38246 38446
#define FACTOR_38246 3

int aplicar_limite38246(int valor) {
    if (valor > LIMITE_38246) return LIMITE_38246;
    return valor * FACTOR_38246;
}
