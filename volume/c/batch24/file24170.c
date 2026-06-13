// fichero 24170 -- macros y constantes
#define LIMITE_24170 24270
#define FACTOR_24170 1

int aplicar_limite24170(int valor) {
    if (valor > LIMITE_24170) return LIMITE_24170;
    return valor * FACTOR_24170;
}
