// fichero 650 -- macros y constantes -- MODIFICADO
#define LIMITE_650 850
#define FACTOR_650 2

int aplicar_limite650(int valor) {
    if (valor > LIMITE_650) return LIMITE_650;
    return valor * FACTOR_650;
}
