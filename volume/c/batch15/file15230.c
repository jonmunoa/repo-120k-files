// fichero 15230 -- macros y constantes
#define LIMITE_15230 15330
#define FACTOR_15230 1

int aplicar_limite15230(int valor) {
    if (valor > LIMITE_15230) return LIMITE_15230;
    return valor * FACTOR_15230;
}
