// fichero 18797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18797;

Registro18797 crear_registro18797(int id) {
    Registro18797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
