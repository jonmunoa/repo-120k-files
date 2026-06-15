// fichero 24170 -- macros y constantes -- MODIFICADO
#define LIMITE_24170 24370
#define FACTOR_24170 2

int aplicar_limite24170(int valor) {
    if (valor > LIMITE_24170) return LIMITE_24170;
    return valor * FACTOR_24170;
}
