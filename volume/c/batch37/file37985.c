// fichero 37985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37985;

Registro37985 crear_registro37985(int id) {
    Registro37985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
