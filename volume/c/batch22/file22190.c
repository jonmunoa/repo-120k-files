// fichero 22190 -- macros y constantes -- MODIFICADO
#define LIMITE_22190 22390
#define FACTOR_22190 2

int aplicar_limite22190(int valor) {
    if (valor > LIMITE_22190) return LIMITE_22190;
    return valor * FACTOR_22190;
}
