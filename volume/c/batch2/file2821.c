// fichero 2821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2821;

Registro2821 crear_registro2821(int id) {
    Registro2821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
