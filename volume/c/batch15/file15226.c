// fichero 15226 -- macros y constantes -- MODIFICADO
#define LIMITE_15226 15426
#define FACTOR_15226 3

int aplicar_limite15226(int valor) {
    if (valor > LIMITE_15226) return LIMITE_15226;
    return valor * FACTOR_15226;
}
