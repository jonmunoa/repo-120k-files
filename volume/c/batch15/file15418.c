// fichero 15418 -- macros y constantes -- MODIFICADO
#define LIMITE_15418 15618
#define FACTOR_15418 5

int aplicar_limite15418(int valor) {
    if (valor > LIMITE_15418) return LIMITE_15418;
    return valor * FACTOR_15418;
}
