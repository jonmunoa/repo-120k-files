// fichero 19106 -- macros y constantes -- MODIFICADO
#define LIMITE_19106 19306
#define FACTOR_19106 3

int aplicar_limite19106(int valor) {
    if (valor > LIMITE_19106) return LIMITE_19106;
    return valor * FACTOR_19106;
}
