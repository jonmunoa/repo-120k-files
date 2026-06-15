// fichero 44226 -- macros y constantes -- MODIFICADO
#define LIMITE_44226 44426
#define FACTOR_44226 3

int aplicar_limite44226(int valor) {
    if (valor > LIMITE_44226) return LIMITE_44226;
    return valor * FACTOR_44226;
}
