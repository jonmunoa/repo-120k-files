// fichero 14001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14001;

Registro14001 crear_registro14001(int id) {
    Registro14001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
