// fichero 38646 -- macros y constantes -- MODIFICADO
#define LIMITE_38646 38846
#define FACTOR_38646 3

int aplicar_limite38646(int valor) {
    if (valor > LIMITE_38646) return LIMITE_38646;
    return valor * FACTOR_38646;
}
