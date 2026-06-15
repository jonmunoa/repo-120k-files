// fichero 47650 -- macros y constantes -- MODIFICADO
#define LIMITE_47650 47850
#define FACTOR_47650 2

int aplicar_limite47650(int valor) {
    if (valor > LIMITE_47650) return LIMITE_47650;
    return valor * FACTOR_47650;
}
