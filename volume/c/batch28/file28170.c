// fichero 28170 -- macros y constantes -- MODIFICADO
#define LIMITE_28170 28370
#define FACTOR_28170 2

int aplicar_limite28170(int valor) {
    if (valor > LIMITE_28170) return LIMITE_28170;
    return valor * FACTOR_28170;
}
