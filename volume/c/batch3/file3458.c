// fichero 3458 -- macros y constantes -- MODIFICADO
#define LIMITE_3458 3658
#define FACTOR_3458 5

int aplicar_limite3458(int valor) {
    if (valor > LIMITE_3458) return LIMITE_3458;
    return valor * FACTOR_3458;
}
