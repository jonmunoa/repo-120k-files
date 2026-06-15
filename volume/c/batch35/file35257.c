// fichero 35257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35257;

Registro35257 crear_registro35257(int id) {
    Registro35257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
