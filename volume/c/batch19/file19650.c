// fichero 19650 -- macros y constantes
#define LIMITE_19650 19750
#define FACTOR_19650 1

int aplicar_limite19650(int valor) {
    if (valor > LIMITE_19650) return LIMITE_19650;
    return valor * FACTOR_19650;
}
