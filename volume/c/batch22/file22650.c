// fichero 22650 -- macros y constantes -- MODIFICADO
#define LIMITE_22650 22850
#define FACTOR_22650 2

int aplicar_limite22650(int valor) {
    if (valor > LIMITE_22650) return LIMITE_22650;
    return valor * FACTOR_22650;
}
