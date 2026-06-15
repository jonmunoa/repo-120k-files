// fichero 2917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2917;

Registro2917 crear_registro2917(int id) {
    Registro2917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
