// fichero 33742 -- macros y constantes -- MODIFICADO
#define LIMITE_33742 33942
#define FACTOR_33742 4

int aplicar_limite33742(int valor) {
    if (valor > LIMITE_33742) return LIMITE_33742;
    return valor * FACTOR_33742;
}
