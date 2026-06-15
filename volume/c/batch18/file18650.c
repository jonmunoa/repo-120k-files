// fichero 18650 -- macros y constantes -- MODIFICADO
#define LIMITE_18650 18850
#define FACTOR_18650 2

int aplicar_limite18650(int valor) {
    if (valor > LIMITE_18650) return LIMITE_18650;
    return valor * FACTOR_18650;
}
