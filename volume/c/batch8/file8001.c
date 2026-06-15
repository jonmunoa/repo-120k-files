// fichero 8001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8001;

Registro8001 crear_registro8001(int id) {
    Registro8001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
