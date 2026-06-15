// fichero 19650 -- macros y constantes -- MODIFICADO
#define LIMITE_19650 19850
#define FACTOR_19650 2

int aplicar_limite19650(int valor) {
    if (valor > LIMITE_19650) return LIMITE_19650;
    return valor * FACTOR_19650;
}
