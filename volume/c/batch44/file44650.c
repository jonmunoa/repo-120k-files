// fichero 44650 -- macros y constantes -- MODIFICADO
#define LIMITE_44650 44850
#define FACTOR_44650 2

int aplicar_limite44650(int valor) {
    if (valor > LIMITE_44650) return LIMITE_44650;
    return valor * FACTOR_44650;
}
