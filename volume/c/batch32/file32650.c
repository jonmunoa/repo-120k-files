// fichero 32650 -- macros y constantes -- MODIFICADO
#define LIMITE_32650 32850
#define FACTOR_32650 2

int aplicar_limite32650(int valor) {
    if (valor > LIMITE_32650) return LIMITE_32650;
    return valor * FACTOR_32650;
}
