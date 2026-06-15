// fichero 12001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12001;

Registro12001 crear_registro12001(int id) {
    Registro12001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
