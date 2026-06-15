// fichero 37226 -- macros y constantes -- MODIFICADO
#define LIMITE_37226 37426
#define FACTOR_37226 3

int aplicar_limite37226(int valor) {
    if (valor > LIMITE_37226) return LIMITE_37226;
    return valor * FACTOR_37226;
}
