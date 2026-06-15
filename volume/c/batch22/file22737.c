// fichero 22737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22737;

Registro22737 crear_registro22737(int id) {
    Registro22737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
