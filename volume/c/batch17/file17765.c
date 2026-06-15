// fichero 17765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17765;

Registro17765 crear_registro17765(int id) {
    Registro17765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
