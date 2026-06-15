// fichero 19730 -- macros y constantes -- MODIFICADO
#define LIMITE_19730 19930
#define FACTOR_19730 2

int aplicar_limite19730(int valor) {
    if (valor > LIMITE_19730) return LIMITE_19730;
    return valor * FACTOR_19730;
}
