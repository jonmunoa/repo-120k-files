// fichero 35801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35801;

Registro35801 crear_registro35801(int id) {
    Registro35801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
