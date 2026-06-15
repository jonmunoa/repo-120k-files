// fichero 37706 -- macros y constantes -- MODIFICADO
#define LIMITE_37706 37906
#define FACTOR_37706 3

int aplicar_limite37706(int valor) {
    if (valor > LIMITE_37706) return LIMITE_37706;
    return valor * FACTOR_37706;
}
