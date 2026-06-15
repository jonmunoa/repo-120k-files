// fichero 35677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35677;

Registro35677 crear_registro35677(int id) {
    Registro35677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
