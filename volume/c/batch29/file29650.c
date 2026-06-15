// fichero 29650 -- macros y constantes -- MODIFICADO
#define LIMITE_29650 29850
#define FACTOR_29650 2

int aplicar_limite29650(int valor) {
    if (valor > LIMITE_29650) return LIMITE_29650;
    return valor * FACTOR_29650;
}
