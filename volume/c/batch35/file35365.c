// fichero 35365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35365;

Registro35365 crear_registro35365(int id) {
    Registro35365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
