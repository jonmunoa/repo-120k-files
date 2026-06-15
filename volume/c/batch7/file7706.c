// fichero 7706 -- macros y constantes -- MODIFICADO
#define LIMITE_7706 7906
#define FACTOR_7706 3

int aplicar_limite7706(int valor) {
    if (valor > LIMITE_7706) return LIMITE_7706;
    return valor * FACTOR_7706;
}
