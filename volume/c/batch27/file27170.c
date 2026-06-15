// fichero 27170 -- macros y constantes -- MODIFICADO
#define LIMITE_27170 27370
#define FACTOR_27170 2

int aplicar_limite27170(int valor) {
    if (valor > LIMITE_27170) return LIMITE_27170;
    return valor * FACTOR_27170;
}
