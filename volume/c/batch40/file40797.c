// fichero 40797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40797;

Registro40797 crear_registro40797(int id) {
    Registro40797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40797(Registro40797 r) {
    return r.valor + r.id;
}
