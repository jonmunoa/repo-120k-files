// fichero 23917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23917;

Registro23917 crear_registro23917(int id) {
    Registro23917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
