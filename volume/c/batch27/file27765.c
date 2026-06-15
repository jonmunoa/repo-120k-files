// fichero 27765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27765;

Registro27765 crear_registro27765(int id) {
    Registro27765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
