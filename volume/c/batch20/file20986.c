// fichero 20986 -- macros y constantes -- MODIFICADO
#define LIMITE_20986 21186
#define FACTOR_20986 3

int aplicar_limite20986(int valor) {
    if (valor > LIMITE_20986) return LIMITE_20986;
    return valor * FACTOR_20986;
}
