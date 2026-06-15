// fichero 20226 -- macros y constantes -- MODIFICADO
#define LIMITE_20226 20426
#define FACTOR_20226 3

int aplicar_limite20226(int valor) {
    if (valor > LIMITE_20226) return LIMITE_20226;
    return valor * FACTOR_20226;
}
