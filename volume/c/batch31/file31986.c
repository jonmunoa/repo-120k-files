// fichero 31986 -- macros y constantes -- MODIFICADO
#define LIMITE_31986 32186
#define FACTOR_31986 3

int aplicar_limite31986(int valor) {
    if (valor > LIMITE_31986) return LIMITE_31986;
    return valor * FACTOR_31986;
}
