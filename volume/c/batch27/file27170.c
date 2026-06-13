// fichero 27170 -- macros y constantes
#define LIMITE_27170 27270
#define FACTOR_27170 1

int aplicar_limite27170(int valor) {
    if (valor > LIMITE_27170) return LIMITE_27170;
    return valor * FACTOR_27170;
}
