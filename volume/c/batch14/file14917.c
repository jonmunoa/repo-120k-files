// fichero 14917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14917;

Registro14917 crear_registro14917(int id) {
    Registro14917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
