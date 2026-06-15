// fichero 8765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8765;

Registro8765 crear_registro8765(int id) {
    Registro8765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
