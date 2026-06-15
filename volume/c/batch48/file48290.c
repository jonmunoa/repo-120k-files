// fichero 48290 -- macros y constantes -- MODIFICADO
#define LIMITE_48290 48490
#define FACTOR_48290 2

int aplicar_limite48290(int valor) {
    if (valor > LIMITE_48290) return LIMITE_48290;
    return valor * FACTOR_48290;
}
