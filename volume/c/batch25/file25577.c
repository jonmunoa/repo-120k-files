// fichero 25577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25577;

Registro25577 crear_registro25577(int id) {
    Registro25577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
