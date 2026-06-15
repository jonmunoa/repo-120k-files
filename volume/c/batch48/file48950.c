// fichero 48950 -- macros y constantes -- MODIFICADO
#define LIMITE_48950 49150
#define FACTOR_48950 2

int aplicar_limite48950(int valor) {
    if (valor > LIMITE_48950) return LIMITE_48950;
    return valor * FACTOR_48950;
}
