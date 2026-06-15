// fichero 35821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35821;

Registro35821 crear_registro35821(int id) {
    Registro35821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
