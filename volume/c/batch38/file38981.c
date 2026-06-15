// fichero 38981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38981;

Registro38981 crear_registro38981(int id) {
    Registro38981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
