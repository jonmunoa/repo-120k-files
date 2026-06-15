// fichero 38573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38573;

Registro38573 crear_registro38573(int id) {
    Registro38573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
