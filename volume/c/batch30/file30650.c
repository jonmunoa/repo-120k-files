// fichero 30650 -- macros y constantes -- MODIFICADO
#define LIMITE_30650 30850
#define FACTOR_30650 2

int aplicar_limite30650(int valor) {
    if (valor > LIMITE_30650) return LIMITE_30650;
    return valor * FACTOR_30650;
}
