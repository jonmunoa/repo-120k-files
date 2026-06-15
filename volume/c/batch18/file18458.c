// fichero 18458 -- macros y constantes -- MODIFICADO
#define LIMITE_18458 18658
#define FACTOR_18458 5

int aplicar_limite18458(int valor) {
    if (valor > LIMITE_18458) return LIMITE_18458;
    return valor * FACTOR_18458;
}
