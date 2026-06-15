// fichero 41646 -- macros y constantes -- MODIFICADO
#define LIMITE_41646 41846
#define FACTOR_41646 3

int aplicar_limite41646(int valor) {
    if (valor > LIMITE_41646) return LIMITE_41646;
    return valor * FACTOR_41646;
}
