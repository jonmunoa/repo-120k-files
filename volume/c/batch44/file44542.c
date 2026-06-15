// fichero 44542 -- macros y constantes -- MODIFICADO
#define LIMITE_44542 44742
#define FACTOR_44542 4

int aplicar_limite44542(int valor) {
    if (valor > LIMITE_44542) return LIMITE_44542;
    return valor * FACTOR_44542;
}
