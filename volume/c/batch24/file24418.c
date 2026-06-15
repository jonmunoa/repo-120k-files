// fichero 24418 -- macros y constantes -- MODIFICADO
#define LIMITE_24418 24618
#define FACTOR_24418 5

int aplicar_limite24418(int valor) {
    if (valor > LIMITE_24418) return LIMITE_24418;
    return valor * FACTOR_24418;
}
