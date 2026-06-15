// fichero 25650 -- macros y constantes -- MODIFICADO
#define LIMITE_25650 25850
#define FACTOR_25650 2

int aplicar_limite25650(int valor) {
    if (valor > LIMITE_25650) return LIMITE_25650;
    return valor * FACTOR_25650;
}
