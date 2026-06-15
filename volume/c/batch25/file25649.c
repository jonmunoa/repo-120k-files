// fichero 25649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25649;

Registro25649 crear_registro25649(int id) {
    Registro25649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
