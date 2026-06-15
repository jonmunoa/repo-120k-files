// fichero 38373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38373;

Registro38373 crear_registro38373(int id) {
    Registro38373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
