// fichero 7001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7001;

Registro7001 crear_registro7001(int id) {
    Registro7001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
