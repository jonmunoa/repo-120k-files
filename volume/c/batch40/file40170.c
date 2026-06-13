// fichero 40170 -- macros y constantes
#define LIMITE_40170 40270
#define FACTOR_40170 1

int aplicar_limite40170(int valor) {
    if (valor > LIMITE_40170) return LIMITE_40170;
    return valor * FACTOR_40170;
}
