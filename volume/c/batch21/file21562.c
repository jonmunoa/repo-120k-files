// fichero 21562 -- macros y constantes -- MODIFICADO
#define LIMITE_21562 21762
#define FACTOR_21562 4

int aplicar_limite21562(int valor) {
    if (valor > LIMITE_21562) return LIMITE_21562;
    return valor * FACTOR_21562;
}
