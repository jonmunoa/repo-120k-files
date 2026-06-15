// fichero 3562 -- macros y constantes -- MODIFICADO
#define LIMITE_3562 3762
#define FACTOR_3562 4

int aplicar_limite3562(int valor) {
    if (valor > LIMITE_3562) return LIMITE_3562;
    return valor * FACTOR_3562;
}
