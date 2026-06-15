// fichero 19986 -- macros y constantes -- MODIFICADO
#define LIMITE_19986 20186
#define FACTOR_19986 3

int aplicar_limite19986(int valor) {
    if (valor > LIMITE_19986) return LIMITE_19986;
    return valor * FACTOR_19986;
}
