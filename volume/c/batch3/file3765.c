// fichero 3765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3765;

Registro3765 crear_registro3765(int id) {
    Registro3765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
