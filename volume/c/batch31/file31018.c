// fichero 31018 -- macros y constantes -- MODIFICADO
#define LIMITE_31018 31218
#define FACTOR_31018 5

int aplicar_limite31018(int valor) {
    if (valor > LIMITE_31018) return LIMITE_31018;
    return valor * FACTOR_31018;
}
