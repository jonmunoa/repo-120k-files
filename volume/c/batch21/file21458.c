// fichero 21458 -- macros y constantes -- MODIFICADO
#define LIMITE_21458 21658
#define FACTOR_21458 5

int aplicar_limite21458(int valor) {
    if (valor > LIMITE_21458) return LIMITE_21458;
    return valor * FACTOR_21458;
}
