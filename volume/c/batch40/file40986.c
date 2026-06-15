// fichero 40986 -- macros y constantes -- MODIFICADO
#define LIMITE_40986 41186
#define FACTOR_40986 3

int aplicar_limite40986(int valor) {
    if (valor > LIMITE_40986) return LIMITE_40986;
    return valor * FACTOR_40986;
}
