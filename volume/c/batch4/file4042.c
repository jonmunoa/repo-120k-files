// fichero 4042 -- macros y constantes -- MODIFICADO
#define LIMITE_4042 4242
#define FACTOR_4042 4

int aplicar_limite4042(int valor) {
    if (valor > LIMITE_4042) return LIMITE_4042;
    return valor * FACTOR_4042;
}
