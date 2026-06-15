// fichero 40797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40797;

Registro40797 crear_registro40797(int id) {
    Registro40797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
