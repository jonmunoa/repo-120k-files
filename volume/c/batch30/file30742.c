// fichero 30742 -- macros y constantes -- MODIFICADO
#define LIMITE_30742 30942
#define FACTOR_30742 4

int aplicar_limite30742(int valor) {
    if (valor > LIMITE_30742) return LIMITE_30742;
    return valor * FACTOR_30742;
}
