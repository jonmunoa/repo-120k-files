// fichero 18670 -- macros y constantes -- MODIFICADO
#define LIMITE_18670 18870
#define FACTOR_18670 2

int aplicar_limite18670(int valor) {
    if (valor > LIMITE_18670) return LIMITE_18670;
    return valor * FACTOR_18670;
}
