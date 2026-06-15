// fichero 33569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33569;

Registro33569 crear_registro33569(int id) {
    Registro33569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
