// fichero 52418 -- macros y constantes
#define LIMITE_52418 52518
#define FACTOR_52418 4

int aplicar_limite52418(int valor) {
    if (valor > LIMITE_52418) return LIMITE_52418;
    return valor * FACTOR_52418;
}
