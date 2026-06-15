// fichero 28986 -- macros y constantes -- MODIFICADO
#define LIMITE_28986 29186
#define FACTOR_28986 3

int aplicar_limite28986(int valor) {
    if (valor > LIMITE_28986) return LIMITE_28986;
    return valor * FACTOR_28986;
}
