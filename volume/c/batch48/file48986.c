// fichero 48986 -- macros y constantes -- MODIFICADO
#define LIMITE_48986 49186
#define FACTOR_48986 3

int aplicar_limite48986(int valor) {
    if (valor > LIMITE_48986) return LIMITE_48986;
    return valor * FACTOR_48986;
}
