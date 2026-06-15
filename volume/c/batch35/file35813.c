// fichero 35813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35813;

Registro35813 crear_registro35813(int id) {
    Registro35813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
